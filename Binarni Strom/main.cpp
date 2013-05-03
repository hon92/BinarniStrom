#include <iostream>
#include <string>
#include <algorithm>
#include  <vector>
#include "binTree.h"

using namespace std;

void makePermutation(uint value, vector <uint> &saveVector);
uint *saveFrequency(uint number, vector <uint> saveVector);
void printTable(uint number, uint *field);
uint factorial(uint number);

int main()
{
	vector <uint> saveVector;
	uint *field;

	uint number;
	cout << "Zadejte cislo pro n! permutaci" << endl;
	cin >> number;

	makePermutation(number, saveVector);

	field = saveFrequency(number, saveVector);
	
	printTable(number, field);

	delete field;

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

uint *saveFrequency(uint number, vector <uint> saveVector)
{
	uint saveVectorSize = saveVector.size();

	uint *field = new uint[number];
	for(uint i = 0; i < number; i++)
	{
		field[i] = 0;
	}

	for(uint i = 0; i < number; i++)
	{
		for(uint j = 0; j < saveVectorSize; j++)
		{
			if(saveVector[j] == i+1)
			{
				field[i] = field[i] + 1;
			}
		}
	}
	return field;
}

void printTable(uint number, uint *field)
{
	cout << endl;
	cout << "######################################################" << endl;
	cout << "#" << endl;
	cout << "# Pocet permutaci pro cislo " << number << " je " << factorial(number) << "." <<endl;
	cout << "#" << endl;
	for(int i = 0; i < number;i++)
	{
		cout << "# Cetnost pro vysku stromu " << i+1 << " je " << field[i] << "."<< endl;
	}
	cout << "#" << endl;
	cout << "######################################################" << endl;
	cout << endl;
}

uint factorial(uint number)
{
	if(number == 0 || number == 1)
	{
		return 1;
	}
	return factorial(number - 1) * number;
}