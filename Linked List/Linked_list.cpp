#include"Linked_list.h"
#include<iostream>

using namespace std;

Node::Node(int d):next(NULL),data(d)

void Node::InsertAtStart(Node *lptr,int d)
{

	Node nptr(d);

	if(lptr==NULL)
	{
		lptr=nptr;
	}
	else
	{
		nptr->next=lptr;
		lptr=nptr;
	}


