#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Arithmetic
    /*
	std::cout<<"Please enter 2 intger number: \n";
	int num1, num2;
	std::cin>>num1>>num2;
	// if both are even print their product A/B
	if(num1 % 2 == 0 && num2 % 2 == 0 && num2 != 0){
		std::cout <<(num1 / num2) << "\n";
	}
	// if both are odd print their product A*B
	else if(num1 % 2 != 0 && num2 % 2 != 0 ){
		std::cout <<(num1 * num2) << "\n";
	}
	// if the first is odd and the second is even then find their sum A+B
	else if(num1 % 2 != 0 && num2 % 2 == 0){
		std::cout <<(num1 + num2) << "\n";
	}
	// if the first is even and the second is odd then find their  subtraction A-B
	else if(num1 % 2 == 0 && num2 % 2 != 0){
		std::cout <<(num1 - num2) << "\n";
	}
	*/
	// Problem #2: Sort 3 numbers
	/*
	std::cout<<"Please enter 3 intger number: \n";
	int num1, num2, num3;
	std::cin>>num1>>num2>>num3;
	if(num1 < num2 && num1 < num3){
		if(num2 < num3){std::cout << num1 << " " << num2 << " " << num3;}
		else{std::cout << num1 << " " << num3 << " " << num2;}
	}
	else if(num2 < num1 && num2 < num3){
		if(num1 < num3){std::cout << num2 << " " << num1 << " " << num3;}
		else{std::cout << num2 << " " << num3 << " " << num1;}
	}
	else if(num3 < num1 && num3 < num2){
		if(num1 < num2){std::cout << num3 << " " << num1 << " " << num2;}
		else{std::cout << num3 << " " << num2 << " " << num1;}
	}
	*/
	// Problem #3: Maximum but constrained
	/*	
	std::cout<<"Please enter 3 intger number: \n";
	int num1, num2, num3, max;
	std::cin>>num1>>num2>>num3;
	int res = -1;

	// The next 3 if conditions: let's try to initalize res correctly
	if (num1 < 100)
		res = num1;

	if (num2 < 100)
		res = num2;

	if (num3 < 100)
		res = num3;

	// The next 3 if conditions: let's get the valid max
	if (num1 < 100 && num1 > res)
		res = num1;

	if (num2 < 100 && num2 > res)
		res = num2;

	if (num3 < 100 && num3 > res)
		res = num3;

	cout<<res<<"\n";
	*/
	// Problem #4: Conditional Count
	
	std::cout<<"Please enter 6 intger number: \n";
	int  x, num1, num2, num3, num4, num5;
	std::cin>>x>>num1>>num2>>num3>>num4>>num5;
	int count{0};

	count += (num1 <= x);
	count += (num2 <= x);
	count += (num3 <= x);
	count += (num4 <= x);
	count += (num5 <= x);

	std::cout << count << " " << 5 - count;
		return 0;
}
