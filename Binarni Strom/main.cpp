#include <iostream>
#include <string>
#include <algorithm>
#include "binTree.h"

using namespace std;

void makePermutation(uint value);

int main()
{
	makePermutation(10);

	return 0;
}

void makePermutation(uint value)
{
	int * numbers = new int[value];
	for(uint i = 0; i < value; i++)
	{
		numbers[i] = i+1;
		cout << numbers[i] << endl;
	}

	do
	{
		binTree *tree = new binTree;
		for(uint i = 0; i < value; i++)
		{
			tree->addNewLeafForValue(numbers[i]);
		}
		delete tree;
	}while(next_permutation(numbers,numbers+value));
	delete []numbers;
}