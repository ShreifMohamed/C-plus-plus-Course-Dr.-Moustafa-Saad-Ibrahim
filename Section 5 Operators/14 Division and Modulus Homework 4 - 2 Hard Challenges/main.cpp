#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: 100 or 7?
	
	std::cout<<"Please enter integer number: \n";
	int num;
	std::cin>>num;
	bool is_even = ((num % 2) == 0);
	bool is_odd = 1 - is_even;
	std::cout<<(is_even * 100) + (is_odd * 7);
	
	// Problem #2: Years!
	/*
	std::cout<<"Please enter Your age in days : \n";
	int num;
	std::cin>>num;
	int year = num / 360;
	num = num % 360;
	int month = num / 30;
	num = num % 30;
	std::cout<<year<<" "<<month<<" "<<num;
	*/
return 0;
}
