#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Is Prefix?
    /*
	string input,str;
	std::cin >> input >> str;
	bool flag{true};
	if(str.size() > input.size()){
		std::cout << "NO \n";
		return 0;
	}

	for(size_t i{0}; i < str.size(); i++){
		if(input[i] != str[i]){
			flag =false;
			break;
	    }
	}
	if(flag == true)
		std::cout << "YES \n";
	else
		std::cout << "No \n";
	*/
	// Problem #2: Is Suffix?
	/*
	string input,str;
	std::cin >> input >> str;
	bool flag{true};

	if(str.size() > input.size()){
		std::cout << "NO \n";
		return 0;
	}

	for(size_t i{str.size()}; i > 0; --i){
		if(input[i] == str[i]){
			flag =false;
			break;
	    }
	}
	if(flag == true)
		std::cout << "YES \n";
	else
		std::cout << "No \n";
	*/
	// Problem #3:  Is Substring?	
	/*
	string input,str;
	std::cin >> input >> str;
	bool flag{true};
	if(str.size() > input.size()){
		std::cout << "NO \n";
		return 0;
	}
	
	for(size_t i{0}; i <  input.size() - str.size() + 1; ++i){
		
		for(size_t j{0}; j < str.size() && flag; ++j){
			if(input[j] != str[j]){
				flag =false;
			}
	    }
		if(flag == true){
			std::cout << "YES \n";
			return 0;
		}
	}
		std::cout << "No \n";
	*/	
	// Problem #4:  Is Subsequence?
	/*
	string input,str;
	std::cin >> input >> str;
	
	if(str.size() > input.size()){
		std::cout << "NO \n";
		return 0;
	}

	int str_count{0};
	
	for(size_t i{0}; i <  input.size(); ++i){
			if(input[i] == str[str_count]){
				++str_count;
			}

			if(str_count == str.size()){
				std::cout << "YES \n";
				return 0;
			}
	}
		std::cout << "No \n";
	*/
	// Problem #5: Convert to number
	/*
	string str;
	std::cin >> str;
	int num{0};
	for(size_t i{0}; i < str.size(); ++i){
	if(str[i] >= '0' && str[i] <= '9'){
			num = num * 10 + (str[i] - '0');
	}
	}
	std::cout << num << " " << num * 3;
	*/
	// Problem 6: Grouping
	string str;
	std::cin >> str;

	for(size_t i{0}; i < str.size(); ++i){
		if( i != 0 && str[i - 1]  != str[i] ){
			std::cout << " ";
		}
		std::cout << str[i];
	}

return 0;
}
