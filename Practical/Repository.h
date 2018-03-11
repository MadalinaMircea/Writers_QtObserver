#pragma once
#include "Domain.h"
#include "Observer.h"

class Repository : public Observable
{
public:
	std::vector<Idea> ideas;
	Repository() { this->readFromFile(); }
	void add(std::string n, int a, std::string p);
	void readFromFile();
	void writeToFile();
	void accept(int i);
};