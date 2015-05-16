// StackImplementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stack>
#include <iostream>
#include <string>
#include <vector>
#include "FZStack.h"
using namespace FZ;

void standStackCall()
{
	std::cout << "in standStackCall" << std::endl;

	std::stack<int> myStack;
	for (int i = 0; i < 10; ++i)
	{
		myStack.push(i);
	}

	while (!myStack.empty())
	{
		std::cout << myStack.top() << std::endl;
		myStack.pop();
	}
}

void FZIntStackCall()
{
	std::cout << "in FZIntStackCall" << std::endl;

	FZ::FZIntStack intStack;
	for (int i = 0; i < 10; i++)
	{
		intStack.push(i);
	}

	while (!intStack.isEmpty())
	{
		std::cout << intStack.top() << std::endl;
		intStack.pop();
	}
}

void FZStackCall()
{
	std::cout << "in FZStackCall" << std::endl;

	FZ::FZStack<char> charStack;
	std::vector<char> charVec;
	charVec.push_back('a');
	charVec.push_back('b');
	charVec.push_back('c');
	charVec.push_back('d');
	charVec.push_back('e');
	for (auto item : charVec)
	{
		charStack.push(item);
	}

	while (!charStack.isEmpty())
	{
		std::cout << charStack.top() << std::endl;
		charStack.pop();
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//standStackCall();
	//FZIntStackCall();
	FZStackCall();

	return 0;
}

