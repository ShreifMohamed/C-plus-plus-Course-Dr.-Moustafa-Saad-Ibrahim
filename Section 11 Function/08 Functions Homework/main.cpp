#include <iostream>
#include <string>
using namespace std;

//Homework 1: Max of 6 numbers
/*
int max (int a, int b, int c) {
	return max(a, max(b, c));
}

int max (int a, int b, int c, int d) {
	return max(a, max(b, c, d));
}

int max (int a, int b, int c, int d, int e) {
	return max(a, max(b, c, d, e));
}

int max (int a, int b, int c, int d, int e, int f) {
	return max(a, max(b, c, d, e, f));
}
*/
//Homework 2: Reverse a string
/*
string reverse_str (const string & str){
	string reverse_str ;
	for (int i{str.length() - 1}; i >=  0; --i){
		reverse_str += str[i];
	}
	return reverse_str;
}
*/
//Homework 3: Calculator
/*
void menu() {
	std::cout << "1) Add      2 numbers\n"
		      << "2) Subtract 2 numbers\n"
			  << "3) Multiply 2 numbers\n"
			  << "4) Divide   2 numbers\n"
			  << "5) End the program\n";
}

double add (double num1, double num2) {
	return num1 + num2;
}

double subtract (double num1, double num2) {
	return num1 - num2;
}

double multiply (double num1, double num2) {
	return num1 * num2;
}

double divide (double num1, double num2) {
	if (num2 != 0) {return -1;}
	else {return num1 / num2;}
}

void calculator (){
	double num1, num2;
	bool valied{true};
while (valied) {
  menu();
  std::cout << "\nEnter your menu choice [1 - 5]: ";
  int choise;
  std::cin >> choise;
  switch (choise) {
  case 1:
		std::cout << "Enter 2 numers to add\n";
		std::cin >> num1 >> num2;
		std::cout << add(num1, num2) << "\n";
		break;
  case 2:
		std::cout << "Enter 2 numers to subtract\n";
		std::cin >> num1 >> num2;
		std::cout << subtract(num1, num2) << "\n";
		break;
  case 3:
		std::cout << "Enter 2 numers to multiply\n";
		std::cin >> num1 >> num2;
		std::cout << multiply(num1, num2) << "\n";
		break;
  case 4:
		std::cout << "Enter 2 numers to divide\n";
		std::cin >> num1 >> num2;
		std::cout << divide(num1, num2) << "\n";
		break;
  case 5:
		std::cout << "End the program\n";
		valied = false;
		break;
  default:
	std::cout << "Invalied choise. Try again \n";
	break;
  }
}
}
*/
//Homework 4: Is Palindrome Array
/*
bool is_palindrome (int arr[], int size) {
	for (int i{0}; i < size; ++i){
		if (arr[i] != arr[size - i - 1]) {
			return false;
		}
	}
	return true;
}
*/
//Homework 5: Set-powers
/*
void set_powers (int arr[], int len, int m) {
	arr[0] = 1;
	std::cout << arr[0] << " ";
	for (size_t i{1}; i < len; ++i){
		arr[i] =  m * arr[i - 1];
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
*/
//Homework 6: Get nth-prime
/*
bool is_prime (int num) {
	if (num <= 1) {return false;}
	for (size_t i{2}; i < num; ++i){
		if (num % i == 0) {return false;}
	}
	return true;
}

int nth_prime (int n) {
	for (size_t i{2}; ; ++i){
		if (is_prime(i)){
			--n;
		if (n == 0)
			return i;
		}
	}
	return -1;
}
*/
//Homework 7: Replace substring
bool starts_with (string input, string pattern, int pos) {
	if ( pos + pattern.size() > input.size()) {return false;}
	for ( size_t i{0}; i < pattern.length(); ++i){
		if (pattern[i] != input[i + pos])
			return false;
	}
	return true;
}

string replace_str (string input, string pattern, string to) {
	string res {""};
	for (size_t i{0}; i < input.length(); ++i){
		if (starts_with(input, pattern, i)) {
			res += to;
			i += (int) pattern.size() - 1;
		}
		else
			res += input[i];
	}
	return res;
}
int main() {
//Homework 1: Max of 6 numbers
/*
int a{1}, b{2}, c{3}, d{4}, e{5}, f{6};

std::cout << max (a, b, c) << "\n";
std::cout << max (a, b, c, d) << "\n";
std::cout << max (a, b, c, d, e, f) << "\n";
*/
//Homework 2: Reverse a string
/*
string str {"hello"};
std::cout << reverse_str(str) << "\n";
*/
//Homework 3: Calculator
/*
 calculator();
*/
//Homework 4: Is Palindrome Array
/*
int size;
std::cin >> size;
int arr[size];
for (size_t i{0}; i < size; ++i){
	std::cin >> arr[i];
}
is_palindrome(arr,size);
*/
//Homework 5: Set-powers
/*
int len, m;
std::cin >> len >> m;
int arr[len];
set_powers(arr, len, m);
*/
//Homework 6: Get nth-prime
/*
std::cout << nth_prime(6) << "\n";
*/
//Homework 7: Replace substring
string input, pattern, to;
std::cin >> input >> pattern >> to;
std::cout << replace_str(input, pattern, to);
return 0;
}