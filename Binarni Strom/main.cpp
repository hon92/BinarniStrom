#include <iostream>
#include <string>
#include "binTree.h"

using namespace std;

int main()
{
	node *testNode = new node;
	testNode->value = 10;
	testNode->leftLeaf = NULL;
	testNode->rightLeaf = NULL;

	binTree *objekt = new binTree(testNode);

	node *testNode2 = new node;
	testNode->value = 12;
	testNode->leftLeaf = NULL;
	testNode->rightLeaf = NULL;

	node *testNode3 = new node;
	testNode->value = 8;
	testNode->leftLeaf = NULL;
	testNode->rightLeaf = NULL;

	objekt->addNewLeaf(testNode2);
	objekt->addNewLeaf(testNode3);

	node *hmm = objekt->getMainLeaf();

	cout << objekt->getMainLeaf()->value << endl;
	cout << hmm->leftLeaf->value << endl;
	cout << hmm->rightLeaf->value << endl;

	return 0;
}