#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int main() {
	
    // Problem #1: Find the 3 minimum values
	/*
	int size;
	std::cin >> size;
	int arr[size];
	for(size_t i{0}; i < size; ++i){
		std::cin >> arr[i];
	}
	int mini1 = INT_MAX, mini2 = INT_MAX, mini3 = INT_MAX;
	for(size_t i{0}; i < size; ++i){
			if(arr[i] < mini1){
				mini3 = mini2;
				mini2 = mini1;
				mini1 = arr[i];
			}
			else if(arr[i] < mini2){
				mini3 = mini2;
				mini2 = arr[i];
			}
			else if(arr[i] < mini3){
				mini3 = arr[i];
			}
	}
			
	std::cout << mini1 << " " << mini2 << " " << mini3;
	*/
	// Problem #2: Search for a number
	/*
	int size;
	std::cin >> size;
	int arr[size];
	for(size_t i{0}; i < size; ++i){
		std::cin >> arr[i];
	}
	int queries;
	std::cin>>queries;
	int queries1 {0}, queries2 {0}, queries3 {0}, count1{-1}, count2{-1}, count3{-1};
	std::cin>> queries1 >>queries2 >>queries3;
	for(size_t i{0}; i < size; ++i){
			if(arr[i] == queries1){
				count1 = i;
			}
			else if(arr[i] == queries2){
				count2 = i;
			}
			else if(arr[i] == queries3){
				count3 = i;
			}
	}
	std::cout << count1 << "\n" << count2 << "\n" << count3;
	*/
	// Problem #3: Find most frequent number
	/*
	int size;
	std::cin >> size;
	const int max {270 + 500 +1};
	int frequncy[max] = {0};

	for(size_t i{0}; i < size; ++i){
		int value;
		std::cin >> value;

		value += 500;
		frequncy[value]++;
	}

	int mx_pos {0};
	for(size_t i{0}; i < max; ++i){
		if(frequncy[mx_pos] < frequncy[i]){
			mx_pos = i; 
		}
	}
	std::cout << mx_pos - 500 << " has repeated " << frequncy[mx_pos] << " times ";
	*/
	// Problem #4: Digits frequency
	/*
	int size, value, apper[10] = {0};
	std::cin >> size;
	
	for(size_t i{0}; i < size; ++i){
		std::cin >> value;

		if(value == 0)
			apper[0]++;
		
		while (value) {
			int digit = value % 10;
			apper[digit]++;
			value /= 10;
		}
	}
	for (size_t i{0}; i <= 9; ++i) {
		std::cout << i << " " << apper[i] << "\n";
	}
	*/
	// Problem #5: Unique Numbers of unordered list
	/*
	int size;
	std::cin >> size;
	
	const int max{900};
	int arr[max] = {0};

	for(size_t i{0}; i < size; ++i){
		int value;
		std::cin >> value;
		assert(0 <= value && value <=500);

		if(!arr[value]){
			std::cout << value << " ";
		}
		arr[value] = 1;
	}
	*/
	// Problem #6: Sorting numbers
	int size;
	std::cin >> size;
	
	const int max{900};
	int arr[max] = {0};

	for(size_t i{0}; i < size; ++i){
		int value;
		std::cin >> value;
		assert(0 <= value && value <=500);
		arr[value] ++;
	}
	for(size_t i{0}; i < max; ++i){
		while (arr[i]) {
			--arr[i];
		std::cout << i << " ";
		}
		
	}
return 0;
}
