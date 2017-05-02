#include "nameObj.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream> 

using namespace std;

int main() 
{
	vector<nameObj> nameObjs;
	map<nameObj, int> nameScores;
	ifstream inFile("names.txt");
	string name;

	// TODO: try and catch block for file open/read errors
	while (getline(inFile, name))
	{
		nameObj temp(name);
		nameObjs.push_back(temp);
	}



	// ======= temporary for testing purposes ========
	for (int i = 0; i < nameObjs.size(); i++) {
		cout << "Name: " << nameObjs[i].getName() << endl;
		cout << "Score : " << nameObjs[i].getScore() << endl;
		cout << endl;
	}
	// ===============================================


	// iterate through the vector, computing the nameScore (score * position) and inserting the results into nameScores
	// print out total

	for(int i=0; i<nameObjs.size(); i++)
	{
		int nameScore= nameObjs[i].getScore()*(i+1);
		nameScores.insert(pair<nameObj, int>(nameObjs[i], nameScore);
	}
				  
	cout<< "Total Name Score: " << nameScores << endl; 

	return 0;
}
