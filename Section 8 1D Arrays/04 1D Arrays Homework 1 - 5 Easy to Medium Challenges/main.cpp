#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Is increasing array?
    /*
	int size;
	bool flag{false};
	std::cin>>size;
	int arr[size];

	for(size_t i{0};i < size; ++i){
		std::cin>> arr[i];
	}

	for(size_t i{0}; i < size; ++i){
		if(arr[i] > arr[i+1]){
			flag = true;
			break;
		}
	}
	if(flag == false){
		std::cout << "YES";
	}
	else {std::cout << "NO";}
	*/
	// Problem #2: Replace MinMax
	/*
	const int N{199};
	int size, max {-1}, mini {10000};
	std::cin>>size;
	int arr[N];

	for(size_t i{0};i < size; ++i){
		std::cin>> arr[i];
		if(max < arr[i]){
			max = arr[i];
		}
		if(arr[i] < mini){
			mini = arr[i];
		}
	}

	for(size_t i{0}; i < size; ++i){
		if(mini == arr[i]){
			 arr[i] = max ;
		}
		else if (max == arr[i]){
			 arr[i] = mini;
		}
	}
	for(size_t i{0}; i < size; ++i){
		std::cout << arr[i] << " ";
	}
	*/
	// Problem #3: Unique Numbers of ordered list	
	/*
	const int N{999};
	int size;
	std::cin>>size;
	int arr[N];

	for(size_t i{0};i < size; ++i){
		std::cin>> arr[i];
	}
	std::cout << arr[0] << " ";
	for(size_t i{1};i < size; ++i){
		if(arr[i] != arr[i - 1]){
			std::cout << arr[i] << " ";
			
		}	
	}
	// Another way
	int size, value, last_value{-1};
	std::cin >> size;
	for(size_t i{1};i < size; ++i){
		std::cin >> value;

		if(value != last_value){
			std::cout << value << " ";
		}
		last_value = value;	
	}
	*/
	// Problem #4: Is Palindrome?
	/*
	const int N{999};
	int size;
	std::cin >> size;
	int arr[N];

	for(size_t i{0}; i < size; ++i){
		std::cin >> arr[i];
	}
	bool flag{false};
	for(size_t i{0}; i < size / 2; ++i){
			if(arr[i] != arr[size - 1 - i]){
				flag = true;
				break;
			}
		}

	if(flag) {std::cout << "NO";}
	else {{std::cout << "YES";}}
	*/
	// Problem #5: Smallest pair
	int size;
	std::cin >> size;
	int arr[size];
	for(size_t i{0}; i < size; ++i){
		std::cin >> arr[i];
	}
	int mini {100000};
	for(size_t i{0}; i < size-1; ++i){
		for(size_t j{i+1}; j < size; ++j){
			if(mini > (arr[i]+arr[j]+j-i))
				mini = (arr[i]+arr[j]+j-i);
		}
	}
	std::cout << mini;
return 0;
}
