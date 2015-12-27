#include "Map.h"

int main()
{
	Node * node1 = new Node;
	node1->create_node(123);
	Node * node2 = new Node;
	node2->create_node(321);
	Node * node3 = new Node;
	node3->create_node(132);
	node1->add_node(node1);
	node1->add_node(node2);
	node1->add_node(node3);
	node1->separate_node(node3);
	node1->separate_node(node2);
	node2->separate_node(node2);
	node3->separate_node(node3);
	node1->separate_node(node1);
	delete node1;
	delete node2;
	delete node3;
	return 0;
}