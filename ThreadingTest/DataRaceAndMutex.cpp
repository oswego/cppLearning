// ThreadingTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>
using namespace std;

class LogFile
{
	std::mutex _mu;
	std::ofstream _f;
public:
	LogFile()
	{
		_f.open("log.txt");
	}
	~LogFile()
	{
		if (_f.is_open())
			_f.close();
	}

	void shared_print(std::string msg, int id)
	{
		std::lock_guard<std::mutex> locker(_mu); //RAII
		cout /*_f*/ << msg.c_str() << id << endl;
	}
};


void function_1(LogFile& log)
{
	for (int i = 0; i > -10; i--)
		log.shared_print(string("From function_1: "), i);
}

int main()
{
	LogFile log;
	std::thread t1(function_1, std::ref(log));

	for (int i = 0; i < 10; i++)
		log.shared_print(string("From main: "), i);

	t1.join();

	return 0;
}

