#pragma once

enum FClassType
{
	A,
	B,
	C
};

class IBase
{
public:
	virtual FClassType GetType() = 0;
};

class ChildA : public IBase
{
public:
	inline FClassType GetType() override { return classType; }

private:
	FClassType classType = A;
};

class ChildB : public IBase
{
public:
	inline FClassType GetType() override { return classType; }

private:
	FClassType classType = B;
};

class ChildC : public IBase
{
public:
	inline FClassType GetType() override { return classType; }

private:
	FClassType classType = C;
};

class Factory
{
public:
	static IBase* CreateFObject(FClassType type);
};