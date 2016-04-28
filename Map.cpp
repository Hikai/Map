#include "Map.h"

Node * Store::create_node(unsigned int data)
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

Node * Store::get_root_node()
{
	return root;
}

void Store::set_root_node(Node * node)
{
	root = node;
}
}

void Store::add_node(Node * node)
{
	if (get_root_node() == nullptr) {
		set_root_node(node);
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

void Store::separate_node(Node * node)
{
	node->before = nullptr;
	node->after = nullptr;
	node->parent = nullptr;
	node->left = nullptr;
	node->right = nullptr;
	destroy_node(node);
}

void Store::destroy_node(Node * node)
{
	delete node;
}
