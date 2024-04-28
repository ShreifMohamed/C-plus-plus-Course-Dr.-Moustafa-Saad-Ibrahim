#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Homework 1: Guess the output
	/*
	int a {10}, b {20}, c {30}, d {40};

	std::cout << (a + b == c) << "\n"; // 1
	std::cout << (a + b + c >= 2 * d) << "\n"; // 0

	std::cout << (a > 5 || d < 30) << "\n"; // 1
	std::cout << (a > 5 && d < 30) << "\n"; // 0
	std::cout << (a <= b && b <= c) << "\n"; // 1

	std::cout << (a > 5 && d < 30 || c - b == 10) << "\n"; // 1
	std::cout << (a <= b && b <= c && c <= d) << "\n"; // 1

	std::cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n"; // 1
	std::cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n"; // 0

	std::cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n"; // 1
	std::cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n"; // 0
	*/
	// Homework 2: Create logic!
	/*	
	std::cout<<"Please enter 3 integers about the class room -> Number of boys (nb), number of girls (ng), number of teachers (nt) \n";
	int nb, ng, nt;
	std::cin>>nb>>ng>>nt;

	std::cout<<"nb greater than 25: "<<(nb > 25)<<"\n";
	std::cout<<"ng less than or equal to 30: "<<(ng <= 30)<<"\n";
	std::cout<<"nb > 20 and nt > 2 or ng > 30 and nt > 4: "<<(((nb > 20)&&(nt > 2)) || ((ng > 30)&&(nt > 4)))<<"\n";
	std::cout<<"Either nb < 60 or ng < 70: "<<((nb < 60) || (ng < 70))<<"\n";
	std::cout<<"Neither nb >= 60 nor ng >= 70: "<<(!(nb >= 60) && !(ng >= 70))<<"\n";
	std::cout<<"nb is 10 more students than ng: "<<(nb == ng +10)<<"\n";
	std::cout<<"Difference between nb and ng is more than 10 or nt > 5: "<<((nb-ng) > 10 || nt > 5)<<"\n";
	std::cout<<"Either nb is 10 more students than ng or ng is 15 more students than nb: "<<(nb == ng + 10 || ng ==  nb + 15)<<"\n";
	*/

	// Homework 3: Simplify expressions
	std::cout<<(true && true && false && true)<<std::endl; // 0
	std::cout<<(true && true && false && true || true && false)<<std::endl; // 0
	std::cout<<(true && true && true && true || true && (true || false))<<std::endl; // 1
	std::cout<<(true && true && true || true && (false || (true && (true && true))))<<std::endl; // 1
	std::cout<<(true && true || true && false && true || true && true && false || (true && (true || false)))<<std::endl; // 1
	std::cout<<(true && true || true && false && true || (true && true && false || (true && (true || false))))<<std::endl; // 1
	std::cout<<((true && true || true && true && true || true) && true && false || (true && (true || false)))<<std::endl; // 1
	std::cout<<(true && true || true && (false && true || true && true) && false || (true && (true || false)))<<std::endl; // 1
 return 0;
}
