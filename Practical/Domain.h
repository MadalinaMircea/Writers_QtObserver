#pragma once
#include <string>
#include <iostream>

class Writer
{
public:
	std::string name, expertise;

	Writer() : name(""), expertise("") {}
	Writer(std::string n, std::string e) : name(n), expertise(e) {}

	friend std::istream& operator >> (std::istream& is, Writer& p);
	friend std::ostream& operator << (std::ostream& os, Writer& p);
};

class Idea
{
public:
	std::string description, status, creator;
	int act;

	Idea() : description(""), status(""), creator(""), act(0) {}
	Idea(std::string n, std::string s, std::string c, int a) :
		description(n), status(s), creator(c), act(a) {}

	friend std::istream& operator >> (std::istream& is, Idea& p);
	friend std::ostream& operator << (std::ostream& os, Idea& p);
};