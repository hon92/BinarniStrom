#include <iostream>
#include <string>
#include <algorithm>
#include  <vector>
#include "binTree.h"

using namespace std;

void makePermutation(uint value, vector <uint> &saveVector);

int main()
{
	vector <uint> saveVector;

	uint number;
	cout << "Zadejte cislo pro n! permutaci" << endl;
	cin >> number;

	makePermutation(number, saveVector);

	uint saveVectorSize = saveVector.size();
	for(uint i = 0; i < saveVectorSize; i++)
	{
		cout << saveVector[i] << endl;
	}

	return 0;
}

void makePermutation(uint value, vector <uint> &saveVector)
{
	int * numbers = new int[value];
	for(uint i = 0; i < value; i++)
	{
		numbers[i] = i+1;
	}
	do
	{
		binTree *tree = new binTree;
		for(uint i = 0; i < value; i++)
		{
			tree->addNewLeafForValue(numbers[i]);
		}
		saveVector.push_back(tree->heightOfTree(tree->getMainLeaf()));
		delete tree;
	}while(next_permutation(numbers,numbers+value));
	delete []numbers;
}