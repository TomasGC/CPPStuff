#include <iostream>

#include "Singleton.h"

Singleton &Singleton::GetInstance()
{
	static Singleton instance;
	return instance;
}

const Singleton *Singleton::GetAddress()
{
	return &GetInstance();
}

void Singleton::IncrementCount()
{
	++GetInstance()._count;
}

const int Singleton::GetCount()
{
	return GetInstance()._count;
}

void Singleton::SetString(std::string &str)
{
	GetInstance()._str = GetInstance()._str + str;
}

const std::string Singleton::GetString()
{
	return GetInstance()._str;
}

void Singleton::ClearString()
{
	GetInstance()._str = "";
}