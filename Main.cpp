#include "Map.h"

int main()
{
	Node * node1, * node2, * node3, * node4, * node5, * node6;
	Store * store_node = new Store;
	Store * store_node2 = new Store;
	node1 = store_node->create_node(123);
	node2 = store_node->create_node(321);
	node3 = store_node->create_node(132);
	node4 = store_node2->create_node('a');
	node5 = store_node2->create_node('b');
	node6 = store_node2->create_node('c');
	store_node->add_node(node1);
	store_node->add_node(node2);
	store_node->add_node(node3);
	store_node->add_node(node4);
	store_node->add_node(node5);
	store_node->add_node(node6);
	cout << store_node->root->data << endl;
	cout << store_node->root->left->data << endl;
	cout << store_node->root->right->data << endl;
	store_node->separate_node(node3);
	store_node->separate_node(node2);
	store_node->separate_node(node1);
	delete store_node2;
	delete store_node;
	return 0;
}
