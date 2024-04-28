#include <iostream>
#include <string>
using namespace std;


int main() {
	
    // Problem #1: Find Maximum of 10
	
	std::cout<<"Please enter 10 integer numbers: \n";
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	std::cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
	int max {num1};
	if(max < num2){max = num2;}
	if(max < num3){max = num3;}
	if(max < num4){max = num4;}
	if(max < num5){max = num5;}
	if(max < num6){max = num6;}
	if(max < num7){max = num7;}
	if(max < num8){max = num8;}
	if(max < num9){max = num9;}
	if(max < num10){max = num10;}
	std::cout << max;
	// Problem #2: Find Maximum up to 10
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	// First number
	cnt -= 1;

	// Read  times and maximize
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;
return 0;
}
