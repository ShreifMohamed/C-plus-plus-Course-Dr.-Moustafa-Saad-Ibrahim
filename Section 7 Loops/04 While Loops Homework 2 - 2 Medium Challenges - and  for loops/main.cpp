#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Print diamond
	/*
	int N;
	std::cin>>N;
	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		// Print N - rows spaces
		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		// Print 2*rows-1 stars
		stars_count = 1;
		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		++row;
	}

	row = N;
	while (row >= 1) {
		int stars_count = 1;

		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		stars_count = 1;

		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		--row;
	}
	// by For Loop
	for(size_t row{1}; row <= N; ++row){
		// Print N - rows spaces
		for(size_t stars_count {1};stars_count <= N-row; ++stars_count){
			cout << ' ';
		}
		// Print 2*rows-1 stars
		
		for(size_t stars_count{1};stars_count <= 2*row-1; ++stars_count){
			cout << '*';
		}
		cout << "\n";
	}
	
	for(size_t row{N}; row >= 1; --row) {
		int stars_count = 1;

				for(size_t stars_count {1};stars_count <= N-row; ++stars_count){
			cout << ' ';
		}
		// Print 2*rows-1 stars
		
		for(size_t stars_count{1};stars_count <= 2*row-1; ++stars_count){
			cout << '*';
		}
		cout << "\n";
	}
	*/
	// Problem #2: Special multiples 1
	/*
	int N;

	cin >> N;

	int cnt = 0;

	while (cnt <= N)
	{
		if (cnt % 8 == 0 || cnt % 3 == 0 && cnt % 4 == 0)
			cout<<cnt<<" ";

		cnt ++;
	}
	// by For Loop
	for(size_t cnt{0}; cnt <= N; ++cnt){
		if (cnt % 8 == 0 || cnt % 3 == 0 && cnt % 4 == 0)
			cout<<cnt<<" ";
	}
	*/
	//Problem #3: Special multiples 2
	/*
	int N;

	cin >> N;
	int cnt = 0;
	int current_number = 0;

	while (cnt < N) {
		if (current_number % 3 == 0 && current_number % 4 != 0) {
			cout << current_number << " ";
			cnt++;
		}
		current_number++;
	}
	// by For Loop
	int current_number {0};
	for(size_t cnt{0}; cnt < N;){
		if (current_number % 3 == 0 && current_number % 4 != 0){
			cout << current_number << " ";
			++cnt;
		}
		current_number++;
	}
	*/
	//Problem #4: Minimum of values
	/*
	int T;

	cin >> T;
	
	while (T > 0) {
		int N;
		cin >> N;

		int pos = 0;
		int result;

		while (pos < N) {
			int value;
			cin >> value;

			if (pos == 0)
				result = value;
			else if (result > value)
				result = value;

			pos++;
		}
		cout<<result<<"\n";

		--T;
	}
	// by For Loop
	for(size_t i{T}; i > 0; --i){
		int N;
		cin >> N;

		int result;

		for(size_t pos{0}; pos < N; ++pos) {
			int value;
			cin >> value;

			if (pos == 0)
				result = value;
			else if (result > value)
				result = value;
		}
		cout<<result<<"\n";
	}
	*/
return 0;
}
