#ifndef OBSERVER_H
#define OBSERVER_H
#pragma once

#include <vector>

class Subject;
class Observer;

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

class Observer
{
public:
	Observer(Subject &subject);
	virtual ~Observer() {}
	friend void Subject::Notify();

protected:
	virtual void Update() = 0;
	inline Subject &GetSubject() { return _subject; }

private:
	Subject &_subject;
};

class ViewOne : public Observer
{
public:
	ViewOne(Subject &subject);

protected:
	void Update() override;
};

class ViewTwo : public Observer
{
public:
	ViewTwo(Subject &subject);

protected:
	void Update() override;
};

#endif