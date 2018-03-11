#include "Utils.h"
#include <sstream>
using namespace std;

vector<string> tokenize(string str, char delim)
{
	stringstream ss(str);
	string token;
	vector<string> result;

	while (getline(ss, token, delim))
		result.push_back(token);

	return result;
}