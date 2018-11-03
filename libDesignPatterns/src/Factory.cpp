#include <iostream>

#include "Polymorphism.h"
#include "Factory.h"

Base *Factory::CreateFObject(ClassType type)
{
	switch (type)
	{
	case A:
		return new ChildA();

	case B:
		return new ChildB();

	case C:
		return new ChildC();
	}

	return NULL;
}