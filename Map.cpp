#include "Map.h"

Node * create_node(unsigned int data)
{
	Node * node = (Node *)malloc(sizeof(Node *));
	node->data = data;
	node->before = nullptr;
	node->after = nullptr;
	node->parent = nullptr;
	node->left = nullptr;
	node->right = nullptr;
	return node;
}

void destroy_node(Node * node)
{
	free(node);
}