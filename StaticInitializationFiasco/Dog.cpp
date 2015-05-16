#include "stdafx.h"
#include "Dog.h"
#include "Cat.h"

Dog::Dog(char* name)
{
	std::cout << "Constructing Dog " << name << std::endl;
	_name = name;
}

void Dog::bark()
{
	std::cout << "Dog rules! My name is " << _name.c_str() << std::endl;
}