#include <iostream>
#include <string>
#include <map>

using namespace std;

class nameObj
{
private:
	string name;
	int score;
	map<string, int> scorer;

public:
	nameObj();
	nameObj(string);
	int computeScore();
	string getName();
	int getScore();
	void setName(string);
	void setScore(int);
};