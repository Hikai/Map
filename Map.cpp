#include "Map.h"

unsigned int Node::get_node_data(void)
{
	return data;
}

Node * Node::get_node_after(void)
{
	return after;
}

Node * Node::get_node_before(void)
{
	return before;
}

Node * Node::get_node_parent(void)
{
	return parent;
}

Node * Node::get_node_left(void)
{
	return left;
}

Node * Node::get_node_right(void)
{
	return right;
}

void Node::set_node_data(unsigned int data)
{
	this->data = data;
}

void Node::set_node_after(Node * node_after)
{
	this->after = node_after;
}

void Node::set_node_before(Node * node_before)
{
	this->before = node_before;
}

void Node::set_node_parent(Node * node_parent)
{
	this->parent = node_parent;
}

void Node::set_node_left(Node * node_left)
{
	this->left = node_left;
}

void Node::set_node_right(Node * node_right)
{
	this->right = node_right;
}

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
