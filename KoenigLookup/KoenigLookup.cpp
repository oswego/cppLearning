// KoenigLookup.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

namespace A
{
	struct X {};
	class Y {};
	void g(X) { cout << "calling A::g(X)..." << endl; }
	void g(Y) {  cout << "calling A::g(Y)..." << endl; }
}

int main()
{
	A::X x1;
	g(x1);

	A::Y y1;
	g(y1);

	return 0;
}
