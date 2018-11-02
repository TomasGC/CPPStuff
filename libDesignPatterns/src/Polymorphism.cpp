#include <iostream>

#include "Visitor.h"
#include "Polymorphism.h"
#include "Singleton.h"

Base::Base()
{
	std::string s = "Base ";
	Singleton::SetString(s);
}

Base::~Base()
{
	std::string s = "~Base";
	Singleton::SetString(s);
}

ChildA::ChildA()
{
	_classType = A;

	std::string s = "ChildA";
	Singleton::SetString(s);
}

ChildA::~ChildA()
{
	std::string s = "~ChildA ";
	Singleton::SetString(s);
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