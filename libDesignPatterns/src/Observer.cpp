#include <iostream>
#include <algorithm>

#include "Observer.h"
#include "Singleton.h"

Observer::Observer(Subject &subject) : _subject(subject)
{
	_subject.Attach(this);
}

ViewOne::ViewOne(Subject &subject) : Observer(subject)
{
}

void ViewOne::Update()
{
	int state = GetSubject().GetState();

	std::string s = "State of ViewOne: " + std::to_string(state) + " ";
	Singleton::SetString(s);
}

ViewTwo::ViewTwo(Subject &subject) : Observer(subject)
{
}

void ViewTwo::Update()
{
	int state = GetSubject().GetState();

	std::string s = "State of ViewTwo: " + std::to_string(state) + ".";
	Singleton::SetString(s);
}

void Subject::Attach(Observer *observer)
{
	_views.push_back(observer);
}

void Subject::SetState(int state)
{
	_state = state;

	Notify();
}

int Subject::GetState()
{
	return _state;
}

void Subject::Notify()
{
	std::for_each(_views.begin(), _views.end(),
				  [](Observer *observer) {
					  observer->Update();
				  });
}
