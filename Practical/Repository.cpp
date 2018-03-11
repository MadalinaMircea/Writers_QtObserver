#include "Repository.h"
#include <fstream>
#include <assert.h>
using namespace std;

void Repository::readFromFile()
{
	ifstream fin("ideas.txt");
	if (!fin.is_open())
		return;

	Idea s;
	while (fin >> s)
		this->ideas.push_back(s);

	fin.close();
}
void Repository::writeToFile()
{
	ofstream fout("ideas.txt");
	if (!fout.is_open())
		return;

	for (auto s : ideas)
		fout << s << '\n';

	fout.close();
}

void Repository::add(std::string n, int a, std::string p)
{
	if (n.length() == 0)
		throw std::exception("Description cannot be empty.");

	if(a != 1 && a != 2 && a != 3)
		throw std::exception("Act not valid.");

	for (auto s : this->ideas)
		if (s.description == n)
			throw std::exception("Name already in use.");

	Idea s{ n, "proposed", p, a };
	this->ideas.push_back(s);
	this->writeToFile();
	this->notify();
}

void Repository::accept(int i)
{
	this->ideas[i].status = string{ "accepted" };
	this->writeToFile();
	this->notify();
}