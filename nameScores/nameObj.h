#include <iostream>
#include <string>
#include <map>

using namespace std;

extern char scorer[26];

class nameObj
{
private:
	string name;
	int score;

public:
	nameObj();
	nameObj(string);
	~nameObj();
	int computeScore(string);
	string getName();
	int getScore();
	void setName(string);
	void setScore(int);
};