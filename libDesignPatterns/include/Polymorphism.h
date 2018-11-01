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
class IBase
{
  public:
	virtual ~IBase() {}
	virtual void Accept(Visitor &v) = 0;

	inline void SetValue(int value) { _value = value; }
	inline int GetValue() { return _value; }

	inline ClassType GetType() { return _classType; }

  protected:
	int _value = 0;
	ClassType _classType = COUNT;
};

// Derivated Classes
class ChildA : public IBase
{
  public:
	ChildA();
	void Accept(Visitor &v) override;
};

class ChildB : public IBase
{
  public:
	ChildB();
	void Accept(Visitor &v) override;
};

class ChildC : public IBase
{
  public:
	ChildC();
	void Accept(Visitor &v) override;
};

#endif