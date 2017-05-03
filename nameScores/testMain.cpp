#include "nameObj.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream> 

using namespace std;

int main()
{
  //Got rid of vector and just imported directly into the map. - Abhi
	map<string, int> nameScores;
	ifstream inFile("names.txt");
	string name;

	// TODO: try and catch block for file open/read errors
	while (getline(inFile, name))
	{
		nameObj temp(name);
		//nameObjs.push_back(temp);
		nameScores.insert(pair<string, int>(temp.getName(), temp.getScore()));
	}
  
  //Added by Abhi
  // Testing loading into map and calculation of total.
	
	for (map<string,int>::iterator it = nameScores.begin(); it!=nameScores.end() ; ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	
	
  //This is Bariscan's code
	/*for (int i = 0; i<nameObjs.size(); i++)
	{
		int nameScore = nameObjs[i].getScore()*(i + 1);
		nameScores.insert(pair<nameObj, int>(nameObjs[i], nameScore);
	}

	cout << "Total Name Score: " << nameScores << endl;*/
	system("pause");
	return 0;
}
