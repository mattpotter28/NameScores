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



	// iterate through the vector, computing the nameScore (score * position) and inserting the results into nameScores
	// print out total

	for (int i = 0; i < nameObjs.size(); i++) {
		cout << "Name: " << nameObjs[i].getName() << endl;
		cout << "Score : " << nameObjs[i].getScore() << endl;
		cout << endl;
		
		int totalScores+= nameObjs[i].getScore();
	}
				  
	cout<< "Total Name Score: " << totalScores << endl; 

	return 0;
}
