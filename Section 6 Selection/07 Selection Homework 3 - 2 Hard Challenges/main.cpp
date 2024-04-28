#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Intervals
	/*
	int x, num1, num2, num3, num4, num5, num6;
	std::cin>> x>> num1>> num2>> num3>> num4>> num5>> num6;
	int count{0};
	if(x >= num1 && x <= num2){count += 1;}
	if(x >= num3 && x <= num4){count += 1;}
	if(x >= num5 && x <= num6){count += 1;}
	std::cout << count;
	*/
	// Problem #2: Two Intervals Intersection

	int start1, end1, start2, end2;
	std::cin>>start1>>end1>>start2>>end2;
	if(start1 > end1 || start2 > end2){std::cout << "-1";}
	else{
	if(start1 < start2){start1 = start2;}
	if(end1 > end2){end1 = end2;}
	std::cout << start1 << " " << end1;
	}
	
 return 0;
}
