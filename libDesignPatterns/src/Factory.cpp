#include <iostream>

#include "Factory.h"

IBase* Factory::CreateFObject(FClassType type)
{
	switch(type)
	{
		case A:
		{
			return new ChildA();
			break;
		}

		case B:
		{
			return new ChildB();
			break;
		}

		case C:
		{
			return new ChildC();
			break;
		}
	}

	return NULL;
}