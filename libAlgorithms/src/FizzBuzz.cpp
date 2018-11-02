#include <iostream>
#include <algorithm>
#include <vector>

#include "FizzBuzz.h"

using namespace std;

string GetFizzBuzz(int i)
{
	if ((i % 3 == 0) && (i % 5 == 0))
		return "FizzBuzz";
	else if (i % 3 == 0)
		return "Fizz";
	else if (i % 5 == 0)
		return "Buzz";
	else
		return to_string(i);
}

void FizzBuzz()
{
	for (int i = 1; i <= 100; ++i)
	{
		cout << GetFizzBuzz(i) << endl;
	}
}
