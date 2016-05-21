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
	}
	~Node()
	{
	}
	Node * get_node_before(void);
	Node * get_node_after(void);
	Node * get_node_parent(void);
	Node * get_node_left(void);
	Node * get_node_right(void);
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
