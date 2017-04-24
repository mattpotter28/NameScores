#include "SortNames.h"
using namespace std;

SortNames::SortNames()
{

}

SortNames::~SortNames()
{

}

void SortNames::bubblesort(vector<string>& unsortedNames)
{
	int i, j, swapOccured = 1;
	string temp;
	int vectorLength = unsortedNames.size();
	for (i = 0; i < vectorLength; i++)
	{
		swapOccured = 0;
		for (j = 0; j < (vectorLength - 1); j++)
		{
			if (unsortedNames[j + 1].compare(unsortedNames[j]) < 0)
			{
				temp = unsortedNames[j];
				unsortedNames[j] = unsortedNames[j + 1];
				unsortedNames[j + 1] = temp;
				swapOccured = 1;
			}
		}
	}
	return;
}

int main() 
{
	//string arrStr[10]= { "MARY","PATRICIA","LINDA","BARBARA","ELIZABETH","JENNIFER","MARIA","SUSAN","MARGARET","DOROTHY" };
	//int arrayLength = arrStr->length;
	vector<string> names = { "MARY","PATRICIA","LINDA","BARBARA","ELIZABETH","JENNIFER","MARIA","SUSAN","MARGARET","DOROTHY" };
	//for (int a = 0; a < 10; a++)
	//{
	//	names.push_back(arrStr[a]);
	//	cout << names[a] << endl;
	//}
	SortNames test = SortNames();
	test.bubblesort(names);
	for (unsigned int b = 0; b < 10; b++)
	{
		cout << names[b] << endl;
	}
	system("pause");
	return 0;
}