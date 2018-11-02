#ifndef FACTORY_H
#define FACTORY_H
#pragma once

class Base;
enum ClassType;

class Factory
{
public:
	static Base *CreateFObject(ClassType type);
};

#endif