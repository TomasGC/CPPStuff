#ifndef SINGLETON_H
#define SINGLETON_H
#pragma once

class Singleton
{
private:
	Singleton() {}

	static Singleton& GetInstance();

public:
	static void IncrementCount();
	static int GetCount();
	
private:
	int _count = 0;
};

#endif