#include "nameObj.h"

char scorer[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

nameObj::nameObj()
{
	name = "";
	score = 0;
}

nameObj::nameObj(string n)
{
	name = n;
	score = computeScore(name);
}

nameObj::~nameObj()
{
	
}

int nameObj::computeScore(string n)
{
	int total = 0;

	for (char& c : n) {
		for (int i = 1; i <= 26; i++){
			if (c == scorer[i - 1])
				total += i;
		}
	}

	return total;
}

string nameObj::getName()
{
	return name;
}

int nameObj::getScore()
{
	return score;
}

void nameObj::setName(string n)
{
	name = n;
}

void nameObj::setScore(int s)
{
	score = s;
}
