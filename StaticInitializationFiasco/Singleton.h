#pragma once

class Dog;
class Cat;

class Singleton
{
	static Dog* pDog;
	static Cat* pCat;
public:
	~Singleton();
	static Dog* getDog();
	static Cat* getCat();
};
