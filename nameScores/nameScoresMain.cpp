#include "nameObj.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream> 
#include <string>

using namespace std;

int main()
{
	map<string, int> nameScores;
	ifstream inFile("names.txt");
	string name;

	while (getline(inFile, name))
	{
		nameObj temp(name);
		nameScores.insert(pair<string, int>(temp.getName(), temp.getScore()));
	}

	int total = 0;
	int i = 1;
	for (map<string, int>::iterator it = nameScores.begin(); it != nameScores.end(); ++it)
	{
		total += it->second * i;
		i++;
	}
	cout << "Total Name Score: " << total << endl;


	system("pause");
	return 0;
}
