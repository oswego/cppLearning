// NewAndDelete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void* operator new(std::size_t size) throw(std::bad_alloc)
{
	cout << "You are about to allocate " << size << " byte of memory!!!" << endl;
	//throw std::exception();
	return nullptr;
}

void NoMoreMem()
{
	cerr << "Unable to allocate memory!!!" << endl;
	abort();
}

int main()
{
	std::set_new_handler(NoMoreMem);
	int *pGiant = new int[100];

	std::new_handler nhandler = std::get_new_handler();
	nhandler();

	delete[] pGiant;

	int* p1 = nullptr;

	delete p1;

	delete p1;

	return 0;
}