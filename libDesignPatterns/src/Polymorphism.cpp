#include <iostream>

#include "Visitor.h"
#include "Polymorphism.h"

ChildA::ChildA()
{
	_classType = A;
}

void ChildA::Accept(Visitor &v)
{
	v.VisitChildA(*this);
}

ChildB::ChildB()
{
	_classType = B;
}

void ChildB::Accept(Visitor &v)
{
	v.VisitChildB(*this);
}

ChildC::ChildC()
{
	_classType = C;
}

void ChildC::Accept(Visitor &v)
{
	v.VisitChildC(*this);
}