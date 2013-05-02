#include <iostream>
#include <string>
#include <algorithm>
#include "binTree.h"

using namespace std;

int main()
{
	binTree *tree = new binTree();	
	int myints[] = {1,2,3};

	sort(myints,myints+3);

	cout << "The 3! possible permutations with 3 elements:\n";
	do {
		cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
	} while (next_permutation(myints,myints+3));

	cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';


	return 0;
}