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
	// tree->getMainLeaf()->leftLeaf = testNode3;
	// tree->getMainLeaf()->rightLeaf = testNode2;
	tree->addNewLeaf(testNode2);
	tree->addNewLeaf(testNode3);

	cout << tree->searchLeaf(12)->value << endl;

	return 0;
}