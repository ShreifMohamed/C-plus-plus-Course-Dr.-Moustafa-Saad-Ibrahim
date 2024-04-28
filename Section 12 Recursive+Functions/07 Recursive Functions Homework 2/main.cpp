#include <iostream>
#include <string>
using namespace std;

//Homework 9: Right-Max
/*
void right_max_v1(int arr[], int len, int start_pos = 0) {
	if (start_pos == len - 1)
		return;

	right_max_v1(arr, len, start_pos + 1);
	arr[start_pos] = max(arr[start_pos], arr[start_pos + 1]);
}

void right_max_v2 (int arr[], int len) {
	if (len == 1)
		return;
	right_max_v2(arr + 1, len - 1);
	arr[0] = max(arr[0], arr[1]);
}
*/
//Homework 10: Suffix Sum
/*
int suffix_sum (int arr[], int len, int cnt) {
	if (cnt == 0)
		return 0;

	return  arr[len - 1] + suffix_sum(arr, len - 1, cnt - 1);
}
*/
//Homework 11: Prefix Sum
/*
int prefix_sum (int arr[], int len, int cnt=3) {
	if (cnt == 0)
		return 0;

	return  arr[cnt - 1] + prefix_sum(arr, len - 1, cnt - 1);
}
*/
//Homework 12: Is Palindrome Array
/*
bool is_palindrome_v1 (int arr[], int start, int end) {
		if (start >= end)
			return false;

		if (arr[start] != arr[end]) 
			return false;
		
		return is_palindrome_v1(arr, start+1, end-1);
}

bool is_palindrome_v2 (int arr[], int end) {
		if (end <= 0)
			return true;

		if (arr[0] != arr[end]) 
			return false;
		
		return is_palindrome_v2(arr + 1, end-2);
}
*/
//Homework 13: Is prefix
/*
bool is_prefix (string main, string prefix, int start_pos = 0) {
		if (main.size() < prefix.size())
			return false;
		else{
			if (start_pos == prefix.size())
				return true;
			if (main[start_pos] != prefix[start_pos]) 
					return false;
			}
			
		return is_prefix(main, prefix, start_pos + 1);
}
*/
//Homework 14: Trace 
/*
void do_something (int n) {
	if (n) {
		do_something(n/10);
		std::cout << n % 10;
	}
}
*/
//Homework 15: Count primes
/*
bool is_prime (int start, int curent_test_number = 3) {
	if (start == 2)
		return true;
	
	if (start <= 1 || start % 2 == 0)
		return false;

	if (start == curent_test_number )
		return true;

	if (start % curent_test_number == 0)
		return false;

	return is_prime(start, curent_test_number + 1);
}

int count_primes (int start, int end) {
	if (end < start) 
		return 0;
	
	int result = count_primes(start + 1, end);
	if(is_prime(start))
		result += 1;
	
	return result;
}
*/
//Homework 16: Grid Sum
/*
int di[] = { 1, 0, 1 };
int dj[] = { 0, 1, 1 };

int path_sum(int grid[100][100], int ROWS, int COLS, int row = 0, int col = 0) {
	int sum = grid[row][col];

	if (row == ROWS - 1 && col == COLS - 1)
		return sum;

	int max_idx = -1, max_value = 0;

	for (int d = 0; d < 3; ++d) {
		int new_row = row + di[d];
		int new_col = col + dj[d];

		if (new_row >= ROWS || new_col >= COLS)
			continue;

		if (max_value < grid[new_row][new_col])
			max_value = grid[new_row][new_col], max_idx = d;
	}
	int new_row = row + di[max_idx];
	int new_col = col + dj[max_idx];

	return sum + path_sum(grid, ROWS, COLS, new_row, new_col);
}
*/
//Homework 17: Fibonacci
int fibonacci (int n) {
	if (n <= 1)
		return 1;

	return fibonacci(n - 1) + fibonacci (n - 2);
}

int main() {
//Homework 9: Right Max
/*
	int arr[] = {1, 3, 5, 7, 4, 2};
	
	right_max_v1(arr, 6);

	for (size_t i{0}; i < 6; ++i){
		std::cout << arr[i] << " ";
	}
*/
//Homework 10: Suffix Sum
/*
	int arr[] = {1, 3, 5, 7, 4, 2};
	
	std::cout << suffix_sum(arr, 6, 3);
*/
//Homework 11: Prefix Sum
/*
	int arr[] = {1, 3, 4, 6, 7, 2};
	
	std::cout << prefix_sum(arr, 6);
*/
//Homework 12: Is Palindrome Array
/*
	int arr[] = {1, 2, 3, 2, 1};
	
	std::cout << std::boolalpha << is_palindrome_v1(arr, 0, 4) << "\n";
	std::cout << std::boolalpha << is_palindrome_v2(arr, 4) << "\n";

*/
//Homework 13: Is prefix
/*
	std::cout << std::boolalpha << is_prefix("abcdefg", "abcd") << "\n";
	std::cout << std::boolalpha << is_prefix("abcdefg", "abd") << "\n";
	std::cout << std::boolalpha << is_prefix("abcdefg", "") << "\n";
*/
//Homework 14: Trace 
/*
	do_something(123456);
*/
//Homework 15: Count primes
/*
	std::cout << count_primes(10, 200) << "\n";
	std::cout << count_primes(10, 5000000) << "\n";
*/
//Homework 16: Grid Sum
/*
	int grid[100][100];
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> grid[i][j];
		}
	}

	cout << path_sum(grid, n, m);
*/
//Homework 17: Fibonacci
	std::cout << fibonacci(6) << "\n";
	std::cout << fibonacci(40) << "\n";

return 0;
}