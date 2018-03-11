#pragma once
#include <vector>

class Observer
{
public:
	virtual void update() = 0;
	virtual ~Observer() {}
};

class Observable
{
	std::vector<Observer*> observers;
public:
	void addObserver(Observer* o) { this->observers.push_back(o); }
	void notify()
	{
		for (auto o : this->observers)
			o->update();
	}
};