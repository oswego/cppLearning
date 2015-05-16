// ThreadingTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
using namespace std;

void function_1()
{
	std::cout << "Printing from function_1" << std::endl;
}

class Fctor
{
public:
	void operator()(std::string& msg)
	{
		std::cout << "t1 says: " << msg.c_str() << endl;
		msg = "Woo woo woo";
	}
};

int main()
{
	std::string s = "Go go go!!!";

	cout << std::this_thread::get_id() << endl;

	std::thread t1((Fctor()), std::ref(s));

	cout << t1.get_id() << endl;

	std::thread t2 = std::move(t1);
	
	cout << t2.get_id() << endl;
	
	t2.join();

	std::cout << "main says: " << s.c_str() << std::endl;


	cout << std::thread::hardware_concurrency() << endl;



	return 0;
}

