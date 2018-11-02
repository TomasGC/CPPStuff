#include <iostream>
#include <algorithm>

#include "Observer.h"

Observer::Observer(Subject &subject) : _subject(subject)
{
	_subject.Attach(this);
}

ViewOne::ViewOne(Subject &subject) : Observer(subject)
{
}

void ViewOne::Update(std::ostream &os)
{
	int state = GetSubject().GetState();
	os << "State of ViewOne: " << state << " ";
}

ViewTwo::ViewTwo(Subject &subject) : Observer(subject)
{
}

void ViewTwo::Update(std::ostream &os)
{
	int state = GetSubject().GetState();
	os << "State of ViewTwo: " << state;
}

void Subject::Attach(Observer *observer)
{
	_views.push_back(observer);
}

void Subject::SetState(int state, std::ostream &os)
{
	_state = state;
	Notify(os);
}

int Subject::GetState()
{
	return _state;
}

void Subject::Notify(std::ostream &os)
{
	std::for_each(_views.begin(), _views.end(),
				  [&](Observer *observer) {
					  observer->Update(os);
				  });
}
