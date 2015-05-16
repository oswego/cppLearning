#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include "Singleton.h"

Cat::Cat(char* name)
{
	std::cout << "Constructing Cat " << name << std::endl;
	_name = name;
	Singleton::getDog()->bark();
}

void Cat::meow()
{
	std::cout << "Cat rules! My name is " << _name.c_str() << std::endl;
}