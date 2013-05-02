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
void binTree::addNewLeaf(node *leaf)
{
	//node *foundNode = new node;
	//foundNode = this->searchLeaf(leaf->value);

	//if(foundNode == NULL)
	//{
	//	foundNode = leaf;
	//	return true;
	//}
	//else
	//{
	//	cout << "Tento prvek strom jiz obsahuje." << endl;
	//	return false;
	//}

	node *tempNode = new node;
	tempNode = this->getMainLeaf();

	while(1)
	{
		if(leaf->value == tempNode->value)
		{
			cout << "Prvek uz je ve strome" << endl;
		}
		else
		{
			if(leaf->value < tempNode->value)
			{
				if(tempNode->leftLeaf == NULL)
				{
					tempNode->leftLeaf = leaf;
					break;
				}
			}
			if(leaf->value > tempNode->value)
			{
				if(tempNode->rightLeaf == NULL)
				{
					tempNode->rightLeaf = leaf;
					break;
				}
			}
		}
	}
}

// hledani ve strome
node *binTree::searchLeaf(uint leafValue)
{
	node *tempNode = new node;
	tempNode = this->getMainLeaf();

	do
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
	while(tempNode != NULL);

	return tempNode;
}