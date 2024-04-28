#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Print Range
    /*
	std::cout<<"Please enter the start and rhe end numbers: \n";
	int start, end;
	std::cin>>start>>end;
	//Given a starting number X and an ending number Y, print all numbers between X and Y inclusive, each on a line.
	
	while (start <= end)
	{
		std::cout << start <<"\n";
		start +=1;
	}
	// by For Loop
	for(;start <= end; ++start){
		std::cout << start <<"\n";
	}
	*/
	
	/*
	// Problem #2: Line Of Characters
	int num;
	char c;
	std::cin>>num>>c;
	while(num > 0){
		std::cout << c;
		num -= 1;
	}
	
	// by For Loop
	for(size_t i{0}; i < num; ++i){
		std::cout << c;
	}
	*/
	// Problem #3: Print left angled triangle
	/*
	int num;
	std::cin>>num;
	size_t i{0};
	while(i < num){
		i += 1;
		size_t j{0};
		while(j < i){
			std::cout <<"*";
			j += 1;
		}
		std::cout << "\n";
	}
	// by For Loop
	for(size_t i{0}; i < num; ++i){
		for(size_t j{0}; j < i; ++j){
			std::cout <<"*";
		}
		std::cout << "\n";
	}
	*/
	// Problem #4: Print face down left angled triangle
	/*
	int num;
	std::cin>>num;
	size_t i{num};
	while(i > 0){
		size_t j{i};
		
		while(j > 0){
			std::cout <<"*";
			j -= 1;
		}
		i -= 1;
		std::cout << "\n";
	}
	// by For Loop
	for(size_t i{num}; i > num; --i){
		for(size_t j{num}; j > i; --j){
			std::cout <<"*";
		}
		std::cout << "\n";
	}
	*/
	// Problem #5: Special Average
	/*
	int num, even_count{0}, odd_count{0}, num2;
	double sum_even{0}, sum_odd{0};
	std::cin>>num;
	size_t i{1};
	while(i <= num){
		std::cin>>num2;
		if(i % 2 == 0){sum_even += num2, even_count++;}
		else{sum_odd += num2, odd_count++;}
		i +=1;
	}
	std::cout << sum_odd / odd_count << " " << sum_even / even_count;
	// by For Loop
	for(size_t i{1}; i <= num; ++i){
		std::cin>>num2;
		if(i % 2 == 0){sum_even += num2, even_count++;}
		else{sum_odd += num2, odd_count++;}
	}
	std::cout << sum_odd / odd_count << " " << sum_even / even_count;
	*/
		return 0;
}
