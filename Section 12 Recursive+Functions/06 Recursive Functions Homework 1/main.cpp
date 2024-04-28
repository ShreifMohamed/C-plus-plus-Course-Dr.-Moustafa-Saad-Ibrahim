#include <iostream>
#include <string>
using namespace std;

//Homework 1: Length of 3n+1 
/*
int lenght_3n_plus_1 (int n) {
	if (n == 1)
		return 1;
	if (n % 2 == 0)
		return 1 + lenght_3n_plus_1(n / 2);

	return 1 + lenght_3n_plus_1(3 * n + 1);
}
*/
//Homework 2: Power function
/*
int my_pow (int value, int p) {
	if (p == 0) {
		return 1;
	}
	return value * my_pow(value, p - 1);
}
*/
//Homework 3: Array maximum
/*
int maximum_array (int arr[], int len) {
	if (len == 1)
		return arr[0];
	int sub_result = maximum_array (arr, len - 1);
	return max (sub_result, arr[len - 1]);
}
*/
//Homework 4: Array sum
/*
int sum_array (int arr[], int len) {
	if (len == 1)
		return arr[0];
	int sub_result = sum_array (arr, len - 1);
	return sub_result + arr[len - 1];
}
*/
//Homework 5: Array average
/*
double average_array (int arr[], int len) {
	if (len == 1)
		return arr[0];

	double sub_result = average_array (arr, len - 1) ;
	// Now this was average of len-1. So sum / (len-1)
	sub_result = sub_result * (len - 1);

	return (sub_result + arr[len - 1]) / len;
}
*/
//Homework 6: Array Increment
/*
void increment_array (int arr[], int len) {
	if (len == 0)
		return;

	increment_array (arr, len - 1);
	arr[len - 1] += len - 1;
}
*/
//Homework 7: Array Accumulation
/*
void accumlate_array (int arr[], int len) {
	if (len == 1)
		return;

	accumlate_array (arr, len - 1);
	arr[len - 1] += arr[len - 2];
}
*/
//Homework 8: Left-Max
void left_max_array (int arr[], int len) {
	if (len == 1)
		return;

	left_max_array (arr, len - 1);
	arr[len - 1] = max (arr[len - 1], arr[len - 2]);
}

int main() {
//Homework 1: Length of 3n+1 
/*
	std::cout << lenght_3n_plus_1(6) << "\n";
	std::cout << lenght_3n_plus_1(3) << "\n";
	std::cout << lenght_3n_plus_1(2) << "\n";
*/
//Homework 2: Power function
/*
	std::cout << my_pow(7 , 3) << "\n";
	std::cout << my_pow(7 , 1) << "\n";
*/
//Homework 3: Array maximum
/*
 	int arr[5] {-1, -8, -2, -10, -20};
	std::cout << maximum_array(arr, 5);
*/
//Homework 4: Array sum
/*
 	int arr[5] {1, 8, 2, 10, 3};
	std::cout << sum_array(arr, 5);
*/
//Homework 5: Array average
/*
 	int arr[5] {1, 8, 2, 10, 3};
	std::cout << average_array(arr, 5);
*/
//Homework 6: Get nth-prime
/*
	int arr[5] {1, 8, 2, 10, 3};
	increment_array(arr, 5);
	for (size_t i{0}; i < 5; ++i){
		std::cout << arr[i] << " ";
	}
*/
//Homework 7: Array Accumulation
/*
	int arr[5] {1, 8, 2, 10, 3};
	accumlate_array(arr, 5);
	for (size_t i{0}; i < 5; ++i){
		std::cout << arr[i] << " ";
	}
*/
//Homework 8: Left-Max

	int arr[6] {1, 3, 5, 7, 4, 2};
	left_max_array(arr, 6);
	for (size_t i{0}; i < 6; ++i){
		std::cout << arr[i] << " ";
	}
return 0;
}