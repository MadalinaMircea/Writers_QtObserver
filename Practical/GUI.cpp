#include "GUI.h"
#include<fstream>
using namespace std;

GUI::GUI(Repository * r) : repo(r)
{
	this->init();
}

void GUI::init()
{
	this->readWriters();
	this->startWriters();
}

void GUI::readWriters()
{
	ifstream fin("writers.txt");

	if (!fin.is_open())
		return;

	Writer p;
	while (fin >> p)
		this->writers.push_back(p);

	fin.close();
}

void GUI::startWriters()
{
	for (int i = 0; i < this->writers.size(); i++)
	{
		WindowWidget* p = new WindowWidget{ this->repo, this->writers[i] };
		this->widgets.push_back(p);
		this->widgets[i]->setWindowTitle(QString::fromStdString(this->writers[i].name));
		this->widgets[i]->show();
		this->repo->addObserver(this->widgets[i]);
	}
}