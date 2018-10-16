#pragma once

class Singleton
{
private:
	Singleton() {}

	static Singleton& GetInstance();

public:
	static void IncrementCount();
	static void GetCount();
	
private:
	int _count = 0;
};
