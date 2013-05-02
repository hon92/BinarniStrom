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
	binTree(node *mainLeaf);
	// destruktor
	~binTree(void);
	// metody
	void setMainLeaf(node *mainLeaf){ this->mainLeaf = mainLeaf; }
	node *getMainLeaf(void){ return (this->mainLeaf); }
	
	bool addNewLeaf(node *leaf);
	node *searchLeaf(uint leafValue);

private:
	node *mainLeaf;
};

