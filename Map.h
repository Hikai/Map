#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include <iostream>

using namespace std;

class Node {
public :
	unsigned int data;
	Node * before;
	Node * after;
	Node * parent;
	Node * left;
	Node * right;
	Node()
	{

	}
	~Node()
	{

	}
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
