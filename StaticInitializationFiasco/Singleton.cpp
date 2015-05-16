#include "stdafx.h"
#include "Singleton.h"
#include "Dog.h"
#include "Cat.h"

Dog* Singleton::pDog = nullptr;
Cat* Singleton::pCat = nullptr;

Dog* Singleton::getDog()
{
	if (!pDog)
		pDog = new Dog("Gunner");
	return pDog;
}

Cat* Singleton::getCat()
{
	if (!pCat)
		pCat = new Cat("Smokey");
	return pCat;
}

Singleton::~Singleton(void)
{
	if (pDog) delete pDog;
	if (pCat) delete pCat;
	pDog = 0;
	pCat = 0;
}
