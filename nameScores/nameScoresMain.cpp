#include "nameObj.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream> 

using namespace std;

int main()
{
	map<string, int> nameScores;
	ifstream inFile("names.txt");
	string name;

	// TODO: try and catch block for file open/read errors
	while (getline(inFile, name))
	{
		nameObj temp(name);
		nameScores.insert(pair<string, int>(temp.getName(), temp.getScore()));
	}
  
	int total = 0;
	int i = 1;
	for (map<string,int>::iterator it = nameScores.begin(); it!=nameScores.end() ; ++it)
	{
		total += it->second * i;
	}
	cout << "Total Name Score: " << total << endl;
	
 
	system("pause");
	return 0;
}
