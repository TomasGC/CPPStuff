#ifndef OBSERVER_H
#define OBSERVER_H
#pragma once

#include <vector>

class Subject;

class Observer
{
public:
	Observer(Subject &subject);
	virtual ~Observer() {}
	virtual void Update() = 0;

protected:
	Subject &GetSubject()
	{
		return _subject;
	}

private:
	Subject &_subject;
};

class ViewOne : public Observer
{
public:
	ViewOne(Subject &subject);
	void Update() override;
};

class ViewTwo : public Observer
{
public:
	ViewTwo(Subject &subject);
	void Update() override;
};

class Subject
{
public:
	void Attach(Observer *observer);
	void Notify();

	void SetState(int state);
	int GetState();

private:
	std::vector<Observer *> _views;
	int _state;
};

#endif