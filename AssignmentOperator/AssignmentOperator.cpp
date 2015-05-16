// AssignmentOperator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class collar
{
};

class Dog
{
	collar* pCollar;

	Dog& operator=(const Dog& rhs)
	{
		*pCollar = *rhs.pCollar;
		return *this;
	}
};

int main()
{
	return 0;
}