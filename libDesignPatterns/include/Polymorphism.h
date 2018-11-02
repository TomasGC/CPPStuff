#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H
#pragma once

class Visitor;

enum ClassType
{
	A,
	B,
	C,
	COUNT
};

// Base Class
class Base
{
public:
	Base();
	virtual ~Base();

	virtual void Accept(Visitor &v) = 0;

	inline void SetValue(int value) { _value = value; }
	inline int GetValue() { return _value; }

	inline ClassType GetType() { return _classType; }

protected:
	int _value = 0;
	ClassType _classType = COUNT;
};

// Derivated Classes
class ChildA : public Base
{
public:
	ChildA();
	~ChildA();

	void Accept(Visitor &v) override;
};

class ChildB : public Base
{
public:
	ChildB();
	void Accept(Visitor &v) override;
};

class ChildC : public Base
{
public:
	ChildC();
	void Accept(Visitor &v) override;
};

#endif