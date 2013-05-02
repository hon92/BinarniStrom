#include "binTree.h"

// konstruktory
binTree::binTree(void)
{
	this->mainLeaf = NULL;
}
binTree::binTree(node *mainLeaf)
{
	this->setMainLeaf(mainLeaf);
}

// destruktor
binTree::~binTree(void)
{
}

// pridani noveho prvku
bool binTree::addNewLeaf(node *leaf)
{
	node *foundNode = new node;
	foundNode = this->searchLeaf(leaf->value);

	if(foundNode == NULL)
	{
		foundNode = leaf;
		return true;
	}
	else
	{
		cout << "Tento prvek strom jiz obsahuje." << endl;
		return false;
	}
}

// hledani ve strome
node *binTree::searchLeaf(uint leafValue)
{
	node *tempNode = new node;
	tempNode = this->getMainLeaf();

	while(tempNode->leftLeaf != NULL || tempNode->rightLeaf != NULL)
	{
		if(leafValue == tempNode->value)
		{
			return tempNode;
		}
		else
		{
			if(leafValue < tempNode->value)
			{
				tempNode = tempNode->leftLeaf;
			}
			if(leafValue > tempNode->value)
			{
				tempNode = tempNode->rightLeaf;
			}
		}
	}
	return tempNode;
}