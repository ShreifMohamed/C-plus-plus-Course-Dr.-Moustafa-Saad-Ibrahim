#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
using namespace std;

// Homework 1: Reverse a queue using a stack
/*
void reverse_queue(queue<int>& q)
{
	stack<int> s;

	while (!q.empty())
	{
		s.push(q.front()),
		q.pop();
	}
	while (!s.empty())
	{
		q.push(s.top()),
		s.pop();
	}
	
}
int main() 
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	reverse_queue(q);

	while(!q.empty())
	std::cout << q.front()<<" ", q.pop();

	return 0;
}
*/
// Homework 2: Stack based on a queue
/*
struct ourStack
{
	queue<int> q;
	void push (int val)
	{
		int s = q.size();
		q.push(val);
		while (s--)
		{
			q.push(q.front());
			q.pop();
		}
	}
	void pop()
	{
		if (!q.empty())
		{
			q.pop();
		}
	}
	int top()
	{
		return q.front();
	}
	bool empty()
	{
		return q.empty();
	}
};

int main() 
{
	ourStack s;
	s.push(1);
	s.push(2);
	s.push(3);

	while(!s.empty())
	std::cout << s.top()<<" ", s.pop();

	return 0;
}
*/
//Homework 3: Reverse a number using stack
/*
int reverse_num(int num)
{
	if(num == 0)
		return 0;
	
	stack<int> s;
	while (num)
	{
		s.push(num % 10);
		num /= 10;
	}
	int pase_of_num {1};
	while (!s.empty())
	{
		num = s.top() * pase_of_num + num;
		pase_of_num *= 10;
		s.pop();
	}
	return num;
}

int main() 
{
	std::cout << reverse_num(123456);
	return 0;
}
*/
//Homework 4: all words prefix (1)
/*
int main() 
{	
	map<string, vector<string>> map;

	int num_of_name{0};
	std::cin >> num_of_name;

	while (num_of_name--)
	{
		string str;
		std::cin >> str;

		// add all prefixes to the map
		string prefixes = "";
		for (auto c : str)
			prefixes += c;
			map[prefixes].push_back(str);
	}
	
	std::cin >> num_of_name;

	while (num_of_name--)
	{
		string str;
		std::cin >> str;

		for (auto prefix : map[str])
			std::cout << prefix << " ";
		std::cout << "\n";
	}
	return 0;
}
*/
//Homework 5: all words prefix (2)
/*
int main() 
{	
	map<string, vector<string>> map;

	int num_of_name{0};
	std::cin >> num_of_name;

	while (num_of_name--)
	{
		string str;
		std::cin >> str;

		// add all prefixes to the map
		string prefixes = "";
		for (auto c : str)
			prefixes += c;
			map[prefixes].insert(str);
	}
	
	std::cin >> num_of_name;

	while (num_of_name--)
	{
		string str;
		std::cin >> str;

		for (auto prefix : map[str])
			std::cout << prefix << " ";
		std::cout << "\n";
	}
	return 0;
}
*/
//Homework 6: Remove All Adjacent Duplicates In String
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