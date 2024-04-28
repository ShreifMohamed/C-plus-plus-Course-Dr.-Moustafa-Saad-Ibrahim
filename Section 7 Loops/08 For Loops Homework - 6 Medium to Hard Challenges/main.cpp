#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem 1: Printing X
	/*
	int num;
	std::cin>>num;
	// by For Loop
	for(size_t i{0}; i < num; ++i){
		for(size_t j{0}; j < num; ++j){
			if(i == j || num-i-1 == j)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	*/
	// Problem #2: Find Special Pairs
	/*
	int count {0};

	for (size_t x {50}; x <= 300; ++x) {
		int start{70};

		if(start < x+1)
			start = x+1;

		for (size_t y {start}; y <= 400; ++y) {
			if (x < y && ((x + y) % 7 == 0)) {
				++count;
			}
		}
	}
	std::cout<<count<<"\n";
	*/
	// Problem #3: Find all quadruples
	/*
	int count {0};

	for (size_t a {1}; a <= 200; ++a) {
		for (size_t b {1}; b <= 200; ++b) {
			for (size_t c {1}; c <= 200; ++c) {
				int d = a + b - c;
				if(1 <= d && d <= 200)
					count++;
			}
		}
	}
	std::cout << count << "\n";
	*/
	// Problem #4: Is Prime?
	/*
	int number;

	cin >> number;

	if (number <= 1)
		std::cout << "NO\n";
	else {
		bool is_ok = true;

		for (size_t i {2}; i < number; ++i) {
			if (number % i == 0) {
				is_ok = false;
				break;
			}
		}

		if (is_ok)
			std::cout << "YES";
		else
			std::cout << "NO";
	}
	*/
	// Problem #5: Print Primes
	/*
	int target;
	bool first_print = true;

	cin >> target;

	for(size_t number{2}; number <= target; ++number){
		bool is_ok {true};
		
		for (size_t i {2}; i < number; ++i) {
			if (number % i == 0) {
				is_ok = false;
				break;
			}
		}

		if (is_ok){
			if(!first_print)
				std::cout <<",";

			std::cout << number;

			first_print = false;
		}
	}
	*/
	// Problem 6: Digits sum in range
	int n, a, b, total {0};

	std::cin >> n >> a >> b;

	for (size_t i {1}; i <= n; ++i) {
		int tmp = i;	// be careful - take copy
		int digits_sum {0};

		while (tmp) {
			digits_sum += tmp % 10;
			tmp /= 10;
		}

		if (a <= digits_sum && digits_sum <= b)
			total += i;
	}
	cout << total << "\n";

 return 0;
}
