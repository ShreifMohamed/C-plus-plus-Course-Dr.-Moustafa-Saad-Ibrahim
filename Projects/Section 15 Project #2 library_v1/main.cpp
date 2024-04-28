#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

// Global Members
const int max_books{10};
const int max_users{5};

struct book
{
	// Members
	int id;
	string name;
	int total_quantity;
	int total_borrowed;

	// Defult constructor
	book() {
		
		total_quantity = total_borrowed = 0;
		id = -1;
		name = "";
	}
	// Read book
	void read(){
		std::cout<< "Enter book info: id & name & total quantity: ";
		std::cin >> id >> name >> total_quantity;
		total_borrowed = 0;
	}
	// Borrow book
	bool borrow(int user_id) {
		if (total_quantity - total_borrowed == 0)
			return false;
		++total_borrowed;
		return true;
	}
	// Return book
	void return_book() {
		assert (total_borrowed > 0);
		--total_borrowed;
	}
	// Search book
	bool has_prefix(string prefix) {
		if (name.size() < prefix.size())
			return false;
		for (size_t i{0}; i < prefix.size(); ++i) {
			if (name[i] != prefix[i])
				return false;
		}
		return true;
	}
	// print book
	void print() {
		std::cout<< "id : " << id << " name : " << name << " total quantity : " << total_quantity << " total borrowed : " << total_borrowed << "\n";	
	}
};
// Function compare books by name
bool cmp_book_by_name(book & a, book & b){
	return a.name < b.name;
}
// Function compare books by id
bool cmp_book_by_id(book & a, book & b){
	return a.id < b.id;
}

struct user
{
	// Members
	string name;
	int id;
	int borrowed_books_ids[max_books];
	int length;

	// Defult constructor
	user() {
		name = "";
		id = -1;
		length = 0;
	}
	// Add user
	void read() {
		std::cout<< "Enter user name & id : ";
		std::cin >> name >> id;
	}
	// Borrow books to user
	void borrow(int book_id) {
		borrowed_books_ids[length++] = book_id;
	}
	// Return books from user
	void return_book(int book_id) {
		bool removed {false};
		for (size_t i{0}; i < length; ++i){
			if (borrowed_books_ids[i] == book_id) {
				// Let's shift the array to the right to remove this entry
				for (size_t j{i + 1}; j < length; ++j) {
					borrowed_books_ids[j - 1] = borrowed_books_ids[j];
				}
				removed = true;
				--length;
				break;
			}
		}
		if (!removed)
			std::cout<< "User " << name << " never borrowed book id " << book_id << "\n";
	}
	// Check if user borrowed the book before that 
	bool is_borrowed(int book_id) {
		for (size_t i{0}; i < length; ++i) {
			if (book_id == borrowed_books_ids[i])
				return true;
		}
		return false;
	}
	// Print the borrowed books list of user
	void print() {
		// sort what the user borrowed
		sort(borrowed_books_ids, borrowed_books_ids + length);
		
		std::cout<< "user " << name << " id " << id << " borrowed books ids: ";
		for (size_t i{0}; i < length; ++i) {
			std::cout<< borrowed_books_ids [i] << " ";
		}
		std::cout<< "\n";
	}
};
// The Library System
struct library_system
{
	// Members
	int total_books;
	book books [max_books];
	int total_users;
	user users [max_users];

	// Defult constructor
	library_system() {
		total_books = total_users = 0;
	}
	// Run System
	void run() {
		int flag {true};
		menu();
		while(flag) {
			std::cout << "\nEnter your menu choice [1 - 10]: ";
			int choice;
			std::cin >> choice;
			switch (choice) {
			case 1:
					add_book();
					break;
			case 2:
					search_books_by_prefix();
					break;
			case 3:
					print_who_borrowed_book_by_name();
					break;
			case 4:
					print_library_by_id();
					break;
			case 5:
					print_library_by_name();
					break;
			case 6:
					add_user();
					break;
			case 7:
					user_borrow_book();
					break;
			case 8:
					user_return_book();
					break;
			case 9:
					print_users();
					break;
			case 10:
					std::cout << "Bye Bye \n";
					flag = false;				
					break;	
			default:
					std::cout << "Invalid choice. please try again. \n";
				break;
			}
		}
	}
	// Display the choices to the admin
	void menu() {
		std::cout << "Library Menu: \n" 
				<< "1) add_book\n"
				<< "2) search_books_by_prefix\n"
				<< "3) print_who_borrowed_book_by_name\n"
				<< "4) print_library_by_id\n"
				<< "5) print_library_by_name\n"
				<< "6) add_user\n"
				<< "7) user_borrow_book\n"
				<< "8) user_return_book\n"
				<< "9) print_users\n"
				<< "10) Exit"  ;
	}
	// Functions used in Libray System
	// 1) Adding a book
	void add_book() {
		books[total_books++].read();
	}
	// 2) Search_books_by_prefix
	void search_books_by_prefix() {
		std::cout<< "Enter book name prefix: ";
		string prefix;
		std::cin >> prefix;
		int count{0};
		for (size_t i{0}; i < total_books; ++i) {
			if (books[i].has_prefix(prefix) ) {
				std::cout << books[i].name << "\n";
				++count;
			}
		}

		if (!count)
			std::cout<< "No books with such prefix\n";
	}
	// 6) Add_user
	void add_user() {
		users[total_users++].read();		
	}

	int find_book_idx_by_name(string name) {
		for (size_t i{0}; i < total_books; ++i){
			if (name == books[i].name)
				return i;
		}
		return -1;
	}
	
	int find_user_idx_by_name(string name) {
		for (size_t i{0}; i < total_users; ++i){
			if (name == users[i].name)
				return i;
		}
		return -1;
	}

	bool read_user_name_and_book_name(int & user_indx, int & book_indx, int trials = 3) {
		string user_name, book_name;

		while (trials--) {
			std::cout << "Enter user name and book name : ";
			std::cin >> user_name >> book_name;

			user_indx = find_user_idx_by_name(user_name);

			if (user_indx == -1) {
				std::cout<< "Invalid user name. Try again\n";
				continue;
			}
			book_indx = find_book_idx_by_name(book_name);
			if (book_indx == -1) {
				std::cout<< "Invalid book name. Try again\n";
				continue;
			}
			return true;
		}
		std::cout<< "You did several trials! Try later.\n";
		return false;
	}
	// 7) user borrow books
	void user_borrow_book() {
		int user_idx, book_idx;
		if (read_user_name_and_book_name(user_idx, book_idx))
			return ;

		int user_id = users[user_idx].id;
		int book_id = books[book_idx].id;

		if (!books[book_idx].borrow(user_id))
			std::cout << "No more copies available right now\n";
		else
			users[user_idx].borrow(book_id);
	}
	// 8) user return books
	void user_return_book() {
		int user_idx, book_idx;
		if (read_user_name_and_book_name(user_idx, book_idx))
			return ;

		int book_id = books[book_idx].id;
		books[book_idx].return_book();
		users[user_idx].return_book(book_id);
	}
	// 3) Print library by name
	void print_library_by_name() {
		sort(books, books + total_books, cmp_book_by_name);
		std::cout<< "\n";
		for (size_t i{0}; i < total_books; ++i)
			books[i].print();
	}
	// 4) Print library by id
	void print_library_by_id() {
		sort(books, books + total_books, cmp_book_by_id);
		std::cout<< "\n";
		for (size_t i{0}; i < total_books; ++i)
			books[i].print();
	}
	// 9) Print users 
	void print_users() {
		std::cout<< "\n";
		for (size_t i{0}; i < total_books; ++i)
			users[i].print();
	}
	// 5) print who borrowed book by name
	void print_who_borrowed_book_by_name() {
		string book_name;
		std::cout<< "Enter book name: ";
		cin >> book_name;

		int book_idx = find_book_idx_by_name(book_name);

		if (book_idx == -1) {
			std::cout<< "Invalid book name.\n";
			return;
		}
		int book_id = books[book_idx].id;

		if (books[book_idx].total_borrowed == 0) {
			std::cout<< "No borrowed copies\n";
			return;
		}

		for (int i = 0; i < total_users; ++i) {
			if (users[i].is_borrowed(book_id))
				std::cout<< users[i].name << "\n";
		}
	}
};

int main() {

	library_system library;

	library.run();
return 0;
}