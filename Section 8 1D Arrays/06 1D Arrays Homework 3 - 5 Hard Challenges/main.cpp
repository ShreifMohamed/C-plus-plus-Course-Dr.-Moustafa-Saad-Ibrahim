#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Recamán's sequence
	/*
	int arr[201], index;
	int occurrence[201 * 10] = {0};

	std::cin >> index;
	arr[0] = 0;
	occurrence[0] = 1;

	for(size_t i{1}; i <= index; ++i){
		int last_digit = (arr[i] - (i - 1) - 1);
		
		if(last_digit <  0 || occurrence[last_digit]){
			last_digit = (arr[i] + (i - 1) + 1);
		}
		arr[i] = last_digit;
		occurrence[last_digit] = 1;
	}
	std::cout << arr[index];
	*/
	// Problem #2: Fixed sliding window
	/*
	const int size {199};
	int n, arr[size], k, mini_index, max_sum = INT_MIN;
	std::cin >> k >> n;
	for(size_t i{0}; i < n; ++i)
		std::cin >> arr[i];

	for(size_t i{0}; i < n - k+1; ++i){
		int sum{0};
		for(size_t j{0}; j < k; ++j){
			sum += arr[i + j];
		}
		if(sum > max_sum){
			max_sum = sum;
			mini_index = i;
		}
	}
	std::cout << mini_index << " " << mini_index + k - 1 << " " << max_sum << "\n";
	*/
	// Problem #3: Count increasing subarrays
	// way 1
	/*
	int n, arr[199], counter{0};
	std::cin >> n;
	for(size_t i{0}; i < n; ++i)
		std::cin >> arr[i];

	for(size_t i{0}; i < n ; ++i){
		counter++;

		for(size_t j{i+1}; j < n; ++j){

			if(arr[j] >= arr[j - 1])
					counter++;
			else
				break;
		}
	}
	std::cout << counter << "\n";
	
	//way 2
	int n, arr[199], counter{0}, lenght{1};
	std::cin >> n;

	for(size_t i{0}; i < n; ++i)
		std::cin >> arr[i];

	for(size_t i{1}; i < n ; ++i){

		if(arr[i - 1] <= arr[i]){
			counter += lenght;
			++lenght;
		}
		else
			lenght = 1;
		
	}
	std::cout << counter + n << "\n";
	*/
	// Problem #4: Josephus problem
	/*
	int n, K;

	std::cin >> n >> K;

	bool is_removed[199]{0};

	int last_postion{0};

	for(int i{0}; i < n; ++i){
		int remain_alive {n - i};

		int current_k {K};

		if(K % remain_alive == 0)
			current_k = remain_alive;
		else	current_k = K % remain_alive;

		int step{0};
		int last_person{-1};
		while (step < current_k) {
			if(is_removed[last_postion] == 0)
				last_person = last_postion, step++;
			last_postion = (last_postion + 1) % n;
		}
		is_removed[last_person] = 1;
		std::cout << last_person +1 << " ";
	}
	*/
	// Problem #5: longest subarray
	
	int n;
	int a[999];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int maxSubarrayLength1 = 0;
	int maxSubarrayStartIndex1 = -1;
	int maxSubarrayEndIndex1 = -1;

	for (int start = 0; start < n; start++) {
		int zerosCount = 0;
		int onesCount = 0;

		// While expanding a sub-array just check if it is 0 or 1

		for (int end = start; end < n; end++) {
			if (a[end] == 0)
				zerosCount++;
			else if (a[end] == 1)
				onesCount++;

			if (zerosCount == onesCount) {
				int subarrayLength = end - start + 1;
				if (subarrayLength > maxSubarrayLength1) {
					maxSubarrayLength1 = subarrayLength;
					maxSubarrayStartIndex1 = start;
					maxSubarrayEndIndex1 = end;
				}
			}
		}
	}

	if (maxSubarrayLength1 == 0)
		cout << "NOT FOUND" << endl;
	else {
		cout << maxSubarrayLength1 << endl;
		for (int i = maxSubarrayStartIndex1; i <= maxSubarrayEndIndex1; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	
	
return 0;
}
