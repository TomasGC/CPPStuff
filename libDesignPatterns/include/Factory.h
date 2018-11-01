#ifndef FACTORY_H
#define FACTORY_H
#pragma once

class IBase;
enum ClassType;

// Factory
class Factory
{
  public:
	static IBase *CreateFObject(ClassType type);
};

#endif