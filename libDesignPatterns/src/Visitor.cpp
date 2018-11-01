#include <iostream>

#include "Polymorphism.h"
#include "Visitor.h"

void Visitor::VisitChildA(ChildA &a)
{
	a.SetValue(1);
}

void Visitor::VisitChildB(ChildB &b)
{
	b.SetValue(2);
}

void Visitor::VisitChildC(ChildC &c)
{
	c.SetValue(3);
}