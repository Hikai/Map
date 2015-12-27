#include "Map.h"

Node * root = nullptr;

Node * Node::create_node(unsigned int data)
{
	Node * node = new Node;
	node->data = data;
	node->before = nullptr;
	node->after = nullptr;
	node->parent = nullptr;
	node->left = nullptr;
	node->right = nullptr;
	return node;
}

void Node::add_node(Node * node)
{
	if (root == nullptr) {
		root = node;
	}
	else {
		root->after = node;
		if (root->left == nullptr) {
			root->left = node;
		}
		else {
			root->right = node;
		}
		node->before = root;
		node->parent = root;
	}
}

void Node::separate_node(Node * node)
{
	node->before = nullptr;
	node->after = nullptr;
	node->parent = nullptr;
	node->left = nullptr;
	node->right = nullptr;
	destroy_node(node);
}

void Node::destroy_node(Node * node)
{
	delete node;
}