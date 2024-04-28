#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Is even?
    /*
	std::cout<<"Please enter intger number: \n";
	int num;
	std::cin>>num;
	// Is even using %2
	bool is_even1 = (num % 2 == 0);
	// Is even using /2
	double div_2 = num / 2.0 ;
	div_2 = div_2 - (int)div_2; 
	bool is_even2 =  (div_2 == 0);
	// Is even using %10
	int last_digit = num % 10;
	bool is_even3 =  (last_digit == 0) || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
	std::cout<<is_even1<<"\n";
	std::cout<<is_even2<<"\n";
	std::cout<<is_even3<<"\n";
	*/
	// Problem #2: Last 3 digits sum
	/*
	std::cout<<"Please enter intger number: \n";
	int num;
	std::cin>>num;
	int last_digit  = num % 10;
	num /= 10;
	int last_digit2 = num % 10;
	num /= 10;
	int last_digit3 = num % 10;
	num /= 10;
	std::cout<<(last_digit + last_digit2 + last_digit3)<<"\n";	
	*/
	// Problem #3: 4th digits from the end

	std::cout<<"Please enter intger number: \n";
	int num;
	std::cin>>num;

	// Instructors Answer
	std::cout << ((num / 1000) % 10) << "\n";
	// my answer
	int last_digit  = num % 10;
	num /= 10;
	int last_digit2 = num % 10;
	num /= 10;
	int last_digit3 = num % 10;
	num /= 10;
	int last_digit4 = num % 10;
	num /= 10;
	std::cout<<last_digit4<<"\n";
		return 0;
}
