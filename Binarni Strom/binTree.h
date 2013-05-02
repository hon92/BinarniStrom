#include <iostream>
#include <string>

typedef unsigned int uint;
using namespace std;

struct node
{
	uint value;

	node *leftLeaf;
	node *rightLeaf; 
};

class binTree
{
public:
	// konstruktory
	binTree(void);
	binTree(uint value);
	// destruktor
	~binTree(void);
	// public metody
	void setMainLeaf(node *mainLeaf){ this->mainLeaf = mainLeaf; }
	node *getMainLeaf(void){ return (this->mainLeaf); }
	void addNewLeafForValue(uint value);
	void printTree(void);
	uint binTree::heightOfTree(node *mainNode);

private:
	// private metody
	void printInOrder(node *mainNode);
	void deleteLeafs(node *mainNode);
	// private promenna
	node *mainLeaf;
};

