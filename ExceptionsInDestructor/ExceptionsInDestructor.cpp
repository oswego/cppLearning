// ExceptionsInDestructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class dog
{
	string m_name;
public:
	dog(string name) { m_name = name; cout << name.c_str() << " is constructed." << endl; }
	~dog() { cout << m_name.c_str() << " is destructed." << endl; 
		try {
			throw 20;
		} catch (int e) {
			// do nothing
		}
	}
	void prepareToDestruct() { cout << m_name.c_str() << endl; throw 20; }
};

int main()
{
	try
	{
		dog dog1("Henry");
		dog dog2("Bob");
		dog1.prepareToDestruct();
		dog2.prepareToDestruct();
	}
	catch (int e)
	{
		cout << e << " is caught." << endl;
	}

	return 0;
}