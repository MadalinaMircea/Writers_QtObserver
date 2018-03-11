#pragma once
#include "Repository.h"
#include "Domain.h"
#include "WindowWidget.h"

class GUI
{
public:
	std::vector<Writer> writers;
	std::vector<WindowWidget*> widgets;
	Repository* repo;
	GUI() {}
	GUI(Repository* r);
	~GUI() { delete repo; }
	void init();
	void readWriters();
	void startWriters();
};