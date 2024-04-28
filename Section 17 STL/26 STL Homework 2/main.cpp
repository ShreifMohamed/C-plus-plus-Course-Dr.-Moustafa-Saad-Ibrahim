#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
using namespace std;

//Homework 7: Score of Parentheses
/*
int scoreOfparentheses(string str)
{
	// Each integer represents total sum added to this parent parentheses
	stack<int> st;

	// temp value to help us
	st.push(0);

	for (auto ch : str)
	{
		if (ch == '(')
		{
			st.push(0); // new parent: current sum = 0
		}
		else
		{
			int last_char = st.top();
			st.pop();

			if (last_char == 0)
				last_char = 1; //case ()
			else
				last_char *= 2; // case(A). Get current sum ad multiply
			
			// get the parent and update its sum with a finished sub-expression
			int parent_sum = st.top() + last_char;	// new total sum
			st.pop();
			st.push(parent_sum);
		}
	}
	return st.top();
}
int main() 
{	
		string str;
		std::cin >> str;

		std::cout << scoreOfparentheses(str) << "\n";
	
	return 0;
}
*/
//Homework 8: Asteroid Collision
vector<int> asteridcollisin(vector<int>& asterids)
{
	vector<int> result;

	for ( auto& asterid : asterids)
	{
		bool is_exploded {false};
		while (!result.empty() && asterid < 0 && 0 < result.back())
		{
			//last will explode.
			if (result.back() < -asterid)
			{
				result.pop_back();
				continue;
			}
		
			else if (result.back() == -asterid) // both exploded
			{
				result.pop_back();
			}
			is_exploded = true;
			break;
		}
		if (!is_exploded)
		{
			result.push_back(asterid);
		}
	}
	return result;
}
int main() 
{	vector<int> vec {5, 10, -5};
	std::cout << asteridcollisin(vec);
	return 0;
}

//Homework 6: Remove All Adjacent Duplicates In String
/*
string removeDuplicates(string str)
{
	stack<char> s;
	for(auto ch : str)
	{
		if (!s.empty() && s.top() == ch)
		{
			s.pop();
		}
		else{
			s.push(ch);
		}
	}
		str = "";
		while (!s.empty())
		{
			str = s.top() + str;
			s.pop();
		}
	
	return str;
}
int main() 
{	
	string str;
	std::cin >> str;
	std::cout << removeDuplicates(str) << "\n";
	return 0;
}
*/