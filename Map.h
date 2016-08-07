#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include <iostream>

//using namespace std;


template <typename T>
class Node {
private :
	T data;
	Node * after;
	Node * before;
	Node * parent;
	Node * left;
	Node * right;
public :
	Node()
	{
		set_node_after(nullptr);
		set_node_before(nullptr);
		set_node_parent(nullptr);
		set_node_left(nullptr);
		set_node_right(nullptr);
	}
	~Node()
	{
		set_node_data(NULL);
		set_node_after(nullptr);
		set_node_before(nullptr);
		set_node_parent(nullptr);
		set_node_left(nullptr);
		set_node_right(nullptr);
	}
	T get_node_data(void);
	Node * get_node_after(void);
	Node * get_node_before(void);
	Node * get_node_parent(void);
	Node * get_node_left(void);
	Node * get_node_right(void);
	void set_node_data(T);
	void set_node_after(Node *);
	void set_node_before(Node *);
	void set_node_parent(Node *);
	void set_node_left(Node *);
	void set_node_right(Node *);
};

template <typename T>
class Store {
public :
	Store()
	{
		root = nullptr;
	}
	}
	~Store()
	{
		root = nullptr;
	}
	Node * create_node(T);
	Node * get_root_node();
	void set_root_node(Node *);
	void add_node(Node *);
	void separate_node(Node *);
	void destroy_node(Node *);
private :
	Node * root;
};

template <typename T>
T Node::get_node_data(void)
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

template <typename T>
void Node::set_node_data(T data)
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
	node->set_node_data(NULL);
	node->set_node_after(nullptr);
	node->set_node_before(nullptr);
	node->set_node_parent(nullptr);
	node->set_node_left(nullptr);
	node->set_node_right(nullptr);
	destroy_node(node);
}

void Store::destroy_node(Node * node)
{
	delete node;
}

#endif
