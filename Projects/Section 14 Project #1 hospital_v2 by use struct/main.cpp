#include <iostream>
#include <string>
using namespace std;

// Global varibles
const int max_specializetion {20};
const int max_queue {5};

struct hospital_queue
{
	string names  [max_queue];
	int    status [max_queue];
	int len, spec;
	
	//Defult constructor
	hospital_queue() {
		len = 0;
		spec = -1;
	}
	//Coustem constructor
	hospital_queue(int _spec) {
		len = 0;
		spec = _spec;
	}

	//Functions
	bool add_end(string name, int st) {
		if (len == max_queue)
			return false;
		
		names[len] = name;
		status[len] = st;
		++len;
		return true;
	}
	bool add_front(string name, int st) {
		if (len == max_queue)
			return false;
		// Shift right
		for (int i{len - 1}; i >= 0; --i){
		names[i + 1] = names[i];
		status[i + 1] = status[i];
		}
		names[0] = name;
		status[0] = st;
		len++;
		return true;
	}	
	void remove_front() {
		if (len == 0) {
			std::cout << "No patients at the moment. Have rest, Dr\n";
			return;
		}
		std::cout << names[0] << " please go with the Dr\n";
		for (size_t i{1}; i < len; ++i) {
			names[i - 1] = names[i];
			status[i - 1] = status[i];

		}
		--len;
	}
	void print() {
		if (len == 0)
			return;
		std::cout << "There are " << len << " patients in specialization \n";
		for (size_t i{0}; i < len; ++i) {
			std::cout << names[i]  << " ";
			if (status[i]) 
				std::cout << "urgent\n";
			else
				std::cout << "regular\n";
		}
		std::cout << "\n";
	}
};
// The main System
struct Hospital_system 
{
	hospital_queue Queues[max_specializetion];
	Hospital_system() {
		for (size_t i{0}; i < max_specializetion; ++i)
			Queues[i] = hospital_queue(i);
	}
	void run () {
		bool flag{true};
		while(flag) {
			menu();
			int choice;
			std::cin >> choice;
			switch (choice) {
			case 1:
					addd_new_patient();
					break;
			case 2:
					print_patients();
					break;
			case 3:
					get_next_patient();
					break;
			case 4:
					std::cout << "Bye Bye \n";
					flag = false;
					break;	
			default:
					std::cout << "Invalid choice. please try again. \n";
				break;
			}
		}
	}
	// Functions used in Hospital System
	// Display the choices to the user
	void menu() {
		std::cout << "Enter your choice : \n" 
				<< "1) Add new patient\n"
				<< "2) Print all patients\n"
				<< "3) Get next patient\n"
				<< "4) Exit\n"  ;
	}
	// Add a new patient
	bool addd_new_patient() {
		int spec_number, st; string name;
		
		std::cout << "Enter specialization, name, status: "; 
		std::cin >> spec_number >> name >> st;

		bool status;
		switch (st) {
		case 0: // regular, add to end
				status = Queues[spec_number].add_end(name, st);
				break;
		case 1: // urgent, add to begin. 
				status = Queues[spec_number].add_front(name, st);
				break;
		default:
			break;
		}
		if (status == false){
			std::cout << "Sorry we can't add more patients for this specialization\n";
			return false;
		}
		return true;
	}
	// Print all patients in specialization
	void print_patients() {
		std::cout << "******************************\n";
		for (size_t spec{0}; spec < max_specializetion; ++spec) {
			Queues[spec].print();
		}
	}
	// Get next patient 
	void get_next_patient() {
		std::cout << "Enter specialization: ";
		int spec_number;
		std::cin >> spec_number;
		Queues[spec_number].remove_front();
	}
};

int main() {

	Hospital_system hospital = Hospital_system();
	hospital.run();

return 0;
}