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

	node *testNode2 = new node;
	testNode2->value = 12;
	testNode2->leftLeaf = NULL;
	testNode2->rightLeaf = NULL;

	node *testNode3 = new node;
	testNode3->value = 8;
	testNode3->leftLeaf = NULL;
	testNode3->rightLeaf = NULL;

	binTree *tree = new binTree(testNode);

	// tree->addNewLeaf(testNode2);
	// tree->addNewLeaf(testNode3);

	node *hmm = tree->getMainLeaf();
	hmm->leftLeaf = testNode3;
	hmm->rightLeaf = testNode2;

	cout << hmm->value << endl;
	cout << hmm->leftLeaf->value << endl;
	cout << hmm->rightLeaf->value << endl;

	node *hmm2 = tree->searchLeaf(12);

	cout << hmm2->value << endl;

	return 0;
}