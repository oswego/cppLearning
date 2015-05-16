// StaticInitializationFiasco.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	Singleton s;
	Singleton::getCat()->meow();

	return 0;
}