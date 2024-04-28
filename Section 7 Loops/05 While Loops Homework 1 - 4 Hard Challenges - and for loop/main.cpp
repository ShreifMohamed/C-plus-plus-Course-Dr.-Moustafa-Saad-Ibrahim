#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Find NOs
	/*
	int num;
	std::cin>>num;
	while(num--){
		std::string str;
		std::cin>>str;
		if(str.length() == 2){
			if(str == "NO" || str == "no" || str == "No" ||
			   str == "nO" || str == "ON" || str == "On" || str == "oN" || str == "on"){
				std::cout << str << " ";
			}
		}
	}
	// by For Loop
	for(size_t i{0}; i < num; ++i){
		std::string str;
		std::cin>>str;
		if(str.length() == 2){
			if(str == "NO" || str == "no" || str == "No" || str == "nO" || str == "ON" || str == "On" || str == "oN" || str == "on"){
				std::cout << str << " ";
			}
		}
	}
	*/
	// Problem #2: Reverse number
	
	int num, revers_num;
	std::cin>>num;
	int number {0};
	/*
	while(num > 0){
		int last_digit = num % 10;
		num /= 10;
		number = number * 10 + last_digit;
	}
	std::cout << number << " " << number * 3 << "\n";
	// by For Loop
	for(;num > 0;){
		int last_digit = num % 10;
		num /= 10;
		number = number * 10 + last_digit;
	}
	std::cout << number << " " << number * 3 << "\n";
	*/
	// Problem #3: Multiplication table
	/*
	int N, M;
	std::cin>>N>>M;
	size_t i{1};
	while (i <= N){
		size_t j{1};
		while(j <= M ){
			std::cout << i <<" x " << j << " = " << i*j << "\n";
			++j;
		}		
		++i;
	}
	// by For Loop
	for(size_t i{1}; i <= N; ++i){
		for(size_t j{1}; j <= M; ++j){
			std::cout << i <<" x " << j << " = " << i*j << "\n";
		}		
	}
	*/
	// Problem #4: Special Sum
	int testcases;
	std::cin >> testcases;
	while (testcases > 0) {
		int N;
		cin >> N;

		int cnt_N = 1;
		int sum = 0;
		while (cnt_N <= N) {
			int value = 0;
			cin >> value;

			int cnt_deep = cnt_N;
			int result = 1;

			while (cnt_deep > 0)
				result *= value, cnt_deep--;

			sum += result;
			cnt_N++;
		}
		cout<<sum<<"\n";

		testcases--;
	}
	// by For Loop
	for(;testcases > 0; testcases--){
		int N;
		cin >> N;

		int cnt_N = 1;
		int sum = 0;
		for(;cnt_N <= N; cnt_N++){
			int value = 0;
			cin >> value;

			int cnt_deep = cnt_N;
			int result = 1;

			for(;cnt_deep > 0; cnt_deep--)
				result *= value;

			sum += result;
		}
		cout<<sum<<"\n";
	}

 return 0;
}
