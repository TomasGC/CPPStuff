#ifndef VISITOR_H
#define VISITOR_H
#pragma once

class ChildA;
class ChildB;
class ChildC;

class Visitor
{
  public:
	void VisitChildA(ChildA &a);
	void VisitChildB(ChildB &b);
	void VisitChildC(ChildC &c);
};

#endif