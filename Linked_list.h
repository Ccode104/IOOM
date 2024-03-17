#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include<iostream>

using namespace std;

class Node
{
	private:
		int data;
		Node *next;
	public:
		void InsertAtStart(Node *,int);
		void CreateLinkedList(Node *,int);
		void InsertAtEnd(Node *);
		void DeleteAtStart(Node *,int *);
		void DeleteAtEnd(Node *,int *);
};
#endif

