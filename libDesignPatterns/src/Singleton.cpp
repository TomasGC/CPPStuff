#include <iostream>

#include "Singleton.h"

Singleton & Singleton::GetInstance()
{
	static Singleton instance;
	return instance;
}

void Singleton::IncrementCount()
{
	++GetInstance()._count;
}

int Singleton::GetCount()
{
	return GetInstance()._count;
}