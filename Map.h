#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include <stdio.h>
#include <stdlib.h>

class Node {
private :
	unsigned int data;
	Node * before;
	Node * after;
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
	Node * create_node(unsigned int);
	void add_node(Node *);
	void separate_node(Node *);
	void destroy_node(Node *);
};

#endif