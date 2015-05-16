// LambdaExpression.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct isOdd
{
	bool operator()(int x)
	{
		return x % 2 == 0 ? true : false;
	}
};

struct isEven
{
	bool operator()(int x)
	{
		return (x % 2) == 0 ? false : true;
	}
};

class isMultipleOf
{
	int m_mulpi;
public:
	isMultipleOf(int multi) : m_mulpi(multi) {}
	bool operator()(int x)
	{
		return !(x % m_mulpi);
	}
};

class sumUp
{
	int &m_sum;
public:
	sumUp(int &sum) : m_sum(sum) {}
	void operator()(int x)
	{
		m_sum += x;
	}
};

int main()
{
	std::vector<int> col;// = {1, 2, 3, 4, 5, 6};
	col.push_back(1);
	col.push_back(2);
	col.push_back(3);
	col.push_back(4);
	col.push_back(5);

	size_t c;
	c = std::count_if(col.begin(), col.end(), [](int x) { return x % 2; } );
	cout << "Integers that are odd: " << c << endl;

	c = std::count_if(col.begin(), col.end(), [](int x) { return !(x % 2); } );
	cout << "Integers that are even: " << c << endl;

	int mulpi = 2;
	c = std::count_if(col.begin(), col.end(), [=](int x) { return !(x % mulpi); });
	cout << "Integers that are a multiple of: " << c << endl;

	int sum = 0;
	std::for_each(col.begin(), col.end(), [&](int x) { sum += x; } );
	cout << "the sum is: " << sum << endl;

	c = std::count_if(col.begin(), col.end(),
		[](int x) -> bool
		{
			bool odd = x % 2 == 0 ? true : false;
			cout << x << " is " << (odd ? "odd" : "even") << endl;
			return odd;
		}
	);
	cout << "number of odd integers: " << c << endl;

	return 0;
}