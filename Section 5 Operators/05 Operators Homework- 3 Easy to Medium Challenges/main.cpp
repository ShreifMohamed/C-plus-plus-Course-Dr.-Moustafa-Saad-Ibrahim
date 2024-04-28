#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
	//Homework 1: Guess Program Output
	/*
	int a {0}, b{1};
	std::cout<<a++<<"\n"; // 0
	std::cout<<++a<<"\n"; // 2
	a += 2*b+1;
	b = ++a * 2;
	std::cout<<a<<" "<<b<<"\n"; // 6 12

	b = a;
	a = 12 + a / 3 / 2 - 2 * 2; 
	std::cout<<a<<"\n"; // 9

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	std::cout<<a<<"\n"; //2
	*/
	//Homework 2: Guess Program Output
    /*
	int a{1}, b{1}, c;
	std::cout<<(c = a+b, a = b, b = c,
		   		c = a+b, a = b, b = c,
		  	 	c = a+b, a = b, b = c,
		   		c = a+b, a = b, b = c)<<std::endl; // 8
	*/
	//Homework 3: Guess Program Output

	int a{210};

	a /= 2;
	std::cout<<a<<"\n"; // 105

	std::cout<<(a /= 3 )<<"\n"; // 35
	std::cout<<(a /= 5 )<<"\n"; // 7
	std::cout<<(a /= 7 )<<"\n"; // 1

	std::cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n"; // 1
	
	a = 10;
	std::cout<<a++ + 10<<"\n"; // 20
	std::cout<<++a + 10<<"\n"; // 22
	std::cout<<a-- + 10<<"\n"; // 22
	std::cout<<--a + 10<<"\n"; // 20

	int b{20};
	std::cout<<a++ + ++b<<"\n"; // 31
	std::cout<<a<<"\n"; //11
	++a+=10; 
	std::cout<<a<<"\n"; //22

		return 0;
}




