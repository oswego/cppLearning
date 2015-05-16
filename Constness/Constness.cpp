// Constness.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

class BigArray
{
private:
	std::vector<int> v;
	mutable int accessCounter;

	int* v2;

public:
	int getItem(int index) const
	{
		accessCounter++;
		return v[index];
	}

	void setV2Item(int index, int value) const
	{
		*(v2 + index) = value;
	}
};

int main()
{
	BigArray b;
}
