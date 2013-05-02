#include "binTree.h"
#include <algorithm>

// konstruktory
binTree::binTree(void)
{
	this->mainLeaf = NULL;
}
binTree::binTree(uint value)
{
	node *tempNode = new node;
	tempNode->value = value;
	tempNode->leftLeaf = NULL;
	tempNode->rightLeaf = NULL;
	this->setMainLeaf(tempNode);
	delete tempNode;
}

// destruktor
binTree::~binTree(void)
{
	this->deleteLeafs(this->getMainLeaf());
}

// pridani noveho prvku
void binTree::addNewLeafForValue(uint value)
{
	node *newNode = new node;
	newNode->value = value;
	newNode->leftLeaf = NULL;
	newNode->rightLeaf = NULL;

	node *tempNode = this->getMainLeaf();
	
	if(tempNode == NULL)
	{
		this->setMainLeaf(newNode);
	}
	else
	{
		while(true)
		{
			if(value == tempNode->value)
			{
				cout << "Prvek se jiz nachazi ve strome" << endl;
				return;
			}
			if(value < tempNode->value)
			{
				if(tempNode->leftLeaf == NULL)
				{
					break;
				}
				tempNode = tempNode->leftLeaf;
			}
			else
			{
				if(tempNode->rightLeaf == NULL)
				{
					break;
				}
				tempNode = tempNode->rightLeaf;
			}
		}
		if(value < tempNode->value)
		{
			tempNode->leftLeaf = newNode;
		}
		else
		{
			tempNode->rightLeaf = newNode;
		}
	}
}

void binTree::printInOrder(node *mainNode)
{
	if(mainNode != NULL)
	{
		this->printInOrder(mainNode->leftLeaf);
		cout << "Node value = " << mainNode->value << endl;
		this->printInOrder(mainNode->rightLeaf);
	}
}

void binTree::printTree(void)
{
	printInOrder(this->getMainLeaf());
}

void binTree::deleteLeafs(node *mainNode)
{
	if(mainNode != NULL)
	{
		this->deleteLeafs(mainNode->leftLeaf);
		this->deleteLeafs(mainNode->rightLeaf);
		delete mainNode;
	}
}

uint binTree::heightOfTree(node *mainNode) 
{
	if (mainNode == NULL)
	{
		return 0;
	}
    return 1 + max(heightOfTree(mainNode->leftLeaf), heightOfTree(mainNode->rightLeaf));
}