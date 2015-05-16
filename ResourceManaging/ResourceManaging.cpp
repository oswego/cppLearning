// ResourceManaging.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

class Person
{
public:
	Person(std::string name)
	{
		pName_ = new std::string(name);
	}
	~Person()
	{
		delete pName_;
	}
	/*Person(const Person& rhs)
	{
		pName_ = new std::string(*(rhs.pName()));
	}
	Person& operator=(const Person& rhs);*/
	void printName()
	{
		std::cout << (*pName_).c_str() << std::endl;
	}
	std::string* pName() const
	{
		return pName_;
	}
private:
	/*Person(const Person& rhs)
	{
		pName_ = new std::string(*(rhs.pName()));
	}
	Person& operator=(const Person& rhs);*/
	std::string* pName_;
};

int main()
{
	std::vector<Person*> persons;
	persons.push_back(new Person("George"));
	persons.back()->printName();

	for (auto item : persons)
	{
		if (item)
			delete item;
	}

	std::cout << "Goodbye" << std::endl;
}
