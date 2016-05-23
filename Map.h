#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include <iostream>

using namespace std;

class Node {
private :
	unsigned int data;
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
	Node * get_node_after(void);
	Node * get_node_before(void);
	Node * get_node_parent(void);
	Node * get_node_left(void);
	Node * get_node_right(void);
	void set_node_data(unsigned int);
	void set_node_after(Node *);
	void set_node_before(Node *);
	void set_node_parent(Node *);
	void set_node_left(Node *);
	void set_node_right(Node *);
};

class Store {
public :
	Store()
	{
		root = nullptr;
	}
	}
	~Store()
	{

	}
	Node * create_node(unsigned int);
	Node * get_root_node();
	void set_root_node(Node *);
	void add_node(Node *);
	void separate_node(Node *);
	void destroy_node(Node *);
private :
	Node * root;
};

#endif
