#include "Map.h"

int main()
{
	Node * node1;
	Node * node2;
	Node * node3;
	Store * store_node = new Store;
	node1 = store_node->create_node(123);
	node2 = store_node->create_node(321);
	node3 = store_node->create_node(132);
	store_node->add_node(node1);
	store_node->add_node(node2);
	store_node->add_node(node3);
	cout << store_node->root->data << endl;
	cout << store_node->root->left->data << endl;
	cout << store_node->root->right->data << endl;
	store_node->separate_node(node3);
	store_node->separate_node(node2);
	store_node->separate_node(node1);
	return 0;
}