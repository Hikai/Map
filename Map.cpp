#include "Map.h"

Node * Store::create_node(unsigned int data)
{
	Node * node = new Node;
	node->set_node_data(data);
	node->set_node_after(nullptr);
	node->set_node_before(nullptr);
	node->set_node_parent(nullptr);
	node->set_node_left(nullptr);
	node->set_node_right(nullptr);
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

void Store::add_node(Node * node)
{
	if (get_root_node() == nullptr) {
		set_root_node(node);
	}
	else {
		root->after = node;
		// get_root_node()->after = node;
		if (root->left == nullptr) { // get_root_node()->left == nullptr
			root->left = node; // get_root_node()->left = node;
		}
		else {
			root->right = node; // get_root_node()->right = node;
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
