// VirtualDestructorAndSmartDestructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>
using namespace std;

class Dog
{
public:
	~Dog() { cout << "Dog is destructed." << endl; }
};

class YellowDog : public Dog
{
public:
	~YellowDog() { cout << "Yellow dog is destructed." << endl; }
};

class DogFactory
{
public:
	static Dog* createYellowDog() { return (new YellowDog()); }
	static shared_ptr<Dog> createYellowDog2() { return shared_ptr<YellowDog>(new YellowDog()); }
};

int main()
{
	//Dog* pdog = DogFactory::createYellowDog();

	//// do something with pDog

	//delete pdog;

	shared_ptr<Dog> pdog = DogFactory::createYellowDog2();

	return 0;
}