#include <iostream>
#include <string>
using namespace std;


int main() {
    // 1st homework
	/*
    std::cout<<"Please enter 2 numbers: \n";
	double num1,num2;
    std::cin>>num1>>num2;
	std::cout<<num1<<" + "<<num2<<" = "<<(num1 + num2)<<std::endl;         
	std::cout<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<std::endl;
	std::cout<<num1<<" * "<<num2<<" = "<<(num1 * num2)<<std::endl;
	std::cout<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<std::endl;
    */

	// 2nd homework
    /*
    string name1;
	cout<<"What is student 1 name: ";
	cin>>name1;


	string id1;
	cout<<"His id: ";
	cin>>id1;

	double grade1;
	cout<<"His math exam grade: ";
	cin>>grade1;

	string name2;
	cout<<"What is student 2 name: ";
	cin>>name2;

	string id2;
	cout<<"His id: ";
	cin>>id2;

	double grade2;
	cout<<"His math exam grade: ";
	cin>>grade2;

	cout<<"\nStudents grades in math\n";

	cout<<name1<<" (with id "<<id1<<") got grade: "<<grade1<<"\n";
	cout<<name2<<" (with id "<<id2<<") got grade: "<<grade2<<"\n";
	cout<<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";
	*/

	// 3rd homework

	int num1, num2, num3, num4, num5, num6, num7, num8;
	std::cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;
	int sumeven, sumodd;
	sumeven = num2 + num4 + num6 + num8;
	sumodd = num1 + num3 + num5 + num7;
	std::cout<<sumeven<<" "<<sumodd;
	return 0;
}

