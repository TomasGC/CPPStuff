#ifndef SINGLETON_H
#define SINGLETON_H
#pragma once

class Singleton
{
  private:
	Singleton() {}

	static Singleton &GetInstance();

  public:
	static const Singleton *GetAddress();

	static void IncrementCount();
	static const int GetCount();

	static void SetString(std::string &str);
	static const std::string GetString();
	static void ClearString();

  private:
	int _count = 0;
	std::string _str;
};

#endif