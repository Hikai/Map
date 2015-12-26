#include "Map.h"

int main()
{
	Node * node1 = create_node(123), * node2 = create_node(321), * node3 = create_node(132);
	add_node(node1);
	add_node(node2);
	add_node(node3);
	separate_node(node3);
	separate_node(node2);
	separate_node(node1);
	return 0;
}