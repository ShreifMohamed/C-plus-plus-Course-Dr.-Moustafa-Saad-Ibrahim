#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Smaller row?
    /*
	int arr[100][100];
	int row, coulm;

	std::cin >> row >> coulm;
	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < coulm; ++j){
			std::cin>> arr[i][j];
		}
	}

	int q;
	std::cin >> q;
	while (q--) {
		int frist_row, second_row;
		std::cin >> frist_row >> second_row;
		frist_row --;
		second_row --;

		bool is_smaller {true};

		for (size_t j{0}; j < coulm; ++j){
			if (arr[frist_row][j] >= arr[second_row][j]) {
					is_smaller = false;
					break;
			}
		}
		if(is_smaller){
			std::cout << "YES \n";
		}
		else {std::cout << "NO \n";}
	}
	*/
	// Problem #2: Triangular matrix
	/*
	int row, sum1{0}, sum2{0}, value;

	std::cin >> row;
	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < row; ++j){
			std::cin>> value;


			if (j <= i){
				sum1 += value;
			}
			if ( j >= i) {
				sum2 += value;
			}
		}
	}
	std::cout << sum1 << "\n";
	std::cout << sum2 << "\n";
	*/
	// Problem #3: Transpose
	int row, coulm;

	std::cin >> row >> coulm;
	int arr [100][100];
	int arr2 [100][100];
	
	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < coulm; ++j){
			std::cin>> arr[i][j];
		}
	}

	for(size_t i{0};i < row; ++i){
		for (size_t j{0}; j < coulm ; ++j){
			arr2[j][i] = arr[i][j];
		}
	}

	for(size_t i{0};i < coulm; ++i){
		for (size_t j{0}; j < row; ++j){
			std::cout << arr2[i][j] << " " ;
		}
		std::cout <<"\n";
	}
return 0;
}
