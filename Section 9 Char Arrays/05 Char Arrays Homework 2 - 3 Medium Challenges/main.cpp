#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int main() {
	
    // Problem #1: Compressing
	/*
	string str;
	std::cin >> str;
	str += "$";
	
	int groub_sz{1};
	bool is_frist_group = true;
	
	for(size_t i{1}; i < str.size(); ++i){
		if(str[i-1] != str[i]){
			if (!is_frist_group)
				std::cout <<  "_";
		std::cout << str[i - 1] << groub_sz;
		
		groub_sz = 0;
		is_frist_group = false;
		}
		++groub_sz;
	}
	*/
	// Problem #2: Compare strings
	/*
	string str1, str2;
	std::cin >> str1 >> str2;

	int size = str1.size();
	int small = -1;

	if(str1.size() < str2.size() ){
		size = str2.size();
	}
	
	for(size_t i{0}; small == -1 && i < size; ++i){
		if(str1[i] != str2[i]){
			if (str1[i] < str2[i])
				small = 0;
		
			else
				small = 1;
		}
	}
	if(small == -1){
		if (str1.size() <= str2.size())
			small = 0;
		else
			small = 1;
	}
	if (small == 0)
		std::cout << "YES \n";
	else
		std::cout << "NO \n";
	*/
	// Problem #3: Add 5555
	
	string str;
	std::cin >> str;
	
	int size = str.size();
	int number{0};
	int carry{0};
	for(size_t i{0}; i < size; ++i){
		number = str[size - 1 - i] - '0';

		if(i < 4)
			number += 5;
		number += carry;

		if (number >= 10)
			number -= 10, carry = 1;
		else	
			carry = 0;

		str[size - 1 - i] = number + '0'; 
	}
	
	if (carry)
		std::cout << 1;
	std::cout << str;
	
return 0;
}
