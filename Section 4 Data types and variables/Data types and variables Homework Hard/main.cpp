#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // 1st homework
	/*
    std::cout<<"Please enter 3 numbers : \n";
	int num1, num2, num3, temp{0};
	std::cin>>num1>>num2>>num3;
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;
	std::cout<<num1<<" "<<num2<<" "<<num3;
	*/

    // 2nd homework
    int a, b;
	std::cout<<"Please enter 2 numbers : \n";
	cin >> a >> b;

	// Let's code the 2 possible results
	int equ_is_1 = a * a;
	int equ_is_neg_1 = 2 * a + 1;

	// The trick: we want to make them in 1 equation
	// Where if input is: only 1 equation is computed and the second is zer0
	// To do so: convert -1 to 0 and 1 to 1
	// With simple math, we can convert [-1 1] to [0 1] range

	// value 1 for (b 1) and value 0 for (b -1)
	int is_1 = (b + 1) / 2;
	// value 1 for (b -1) and value 0 for (b 1)
	int is_neg_1 = 1 - is_1;

	// Either 1*something + 0*something for b = 1
	// Or     0*something + 1*something for b = -1
	cout<<is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1;

	// 3rd homework
 	/*
	std::cout<<"Please enter the number : \n";
	int n;
	cin >> n;

	cout<< n * (n+1) / 2;
    */
 return 0;
}
