// DisallowFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class OpenFile
{
public:
	OpenFile(std::string filename) { std::cout << "OpenFile constructed." << std::endl; }
	void destroyMe() { delete this; }
private:
	~OpenFile() { std::cout << "OpenFile destructed." << std::endl; }
};

int main()
{
	OpenFile* f = new OpenFile("file");
	f->destroyMe();
}