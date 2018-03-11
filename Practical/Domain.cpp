#include "Domain.h"
#include <vector>
#include "Utils.h"
using namespace std;

std::istream& operator >> (std::istream& is, Writer& w)
{
	string line;
	getline(is, line);
	vector<string> result = tokenize(line, ',');

	if (result.size() != 2)
		return is;

	w.name = result[0];
	w.expertise = result[1];

	return is;
}
std::ostream& operator << (std::ostream& os, Writer& p)
{
	os << p.name << "," << p.expertise;
	return os;
}

std::istream& operator >> (std::istream& is, Idea& p)
{
	string line;
	getline(is, line);
	vector<string> result = tokenize(line, ',');

	if (result.size() != 4)
		return is;

	p.description = result[0];
	p.status = result[1];
	p.creator = result[2];
	p.act = stoi(result[3]);

	return is;
}
std::ostream& operator << (std::ostream& os, Idea& s)
{
	os << s.description << "," << s.status << "," << s.creator << "," << s.act;
	return os;
}