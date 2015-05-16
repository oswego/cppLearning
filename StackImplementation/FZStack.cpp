#include "stdafx.h"
#include "FZStack.h"

using namespace FZ;

// implementation of FZIntStack;
FZIntStack::FZIntStack() : _top(-1)
{
	_A = new int[20];
}

FZIntStack::~FZIntStack()
{
	_top = -1;
	delete[] _A;
}

int FZIntStack::top()
{
	return _A[_top];
}

void FZIntStack::pop()
{
	_top -= 1;
}

void FZIntStack::push(int x)
{
	_top += 1;
	_A[_top] = x;
}

bool FZIntStack::isEmpty()
{
	return _top == -1 ? true : false;
}

