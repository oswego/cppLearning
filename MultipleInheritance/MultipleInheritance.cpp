// MultipleInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class File
{
public:
	void open()
	{
		cout << "OK" << endl;
	}

private:
	std::string name_;
};

class InputFile : public File
{
public:
	void readFile();
};

class OutputFile : public File
{
public:
	void writeFile();
};

class IOFile : public InputFile, public OutputFile
{
};

int main()
{
	IOFile f;
	f.InputFile::open();

	return 0;
}