#include<stdio.h>
#include <stdlib.h>


typedef struct Node_tag
{
	char Name[10];
	unsigned int prior;
	struct Node_tag *next;
} Node;


Node* InsertProc(Node *lptr);
Node* DeleteProc(Node *lptr);
Node* CreateProc();

Node* CreateProc()
{
	Node *nptr=(Node*)malloc(sizeof(Node));
	
	printf("\nEnter the name of the process: ");
	scanf("%s",nptr->Name);
	printf("\nEnter the priority: ");
	scanf("%u",&nptr->prior);

	nptr->next=NULL;

	return nptr;
}

Node* InsertProc(Node *lptr)
{
	Node *nptr=CreateProc();
	Node *ptr=lptr;
	Node *prev=NULL;
	unsigned int flag=0;
	
	nptr->next=NULL;
	

	if(lptr==NULL)
	{
		lptr=nptr;
	}
	else if(lptr->next==NULL){
		if(nptr->prior>=ptr->prior)
		{
			lptr->next=nptr;
			nptr->next=NULL;
		}
		else{
			nptr->next=lptr;
			lptr=nptr;
		}
	}
	else{
		while((ptr!=NULL)&&(flag==0))
		{
			if(nptr->prior>=ptr->prior)
			{
				//Continue
				prev=ptr;
				ptr=ptr->next;
			}
			else{
				//Break
				flag=1;
				//Insert the process
				nptr->next=ptr;
				prev->next=nptr;
			}
		}
		if(ptr==NULL)
			prev->next=nptr;

		
	}
	
	return lptr;
}

Node* DeleteProc(Node *lptr)
{
	Node *ptr=lptr;

	if(ptr!=NULL)
	{
		printf("\nThe process %s with priority %u has been executed",ptr->Name,ptr->prior);
		lptr=lptr->next;
		free(ptr);
	}
	else{
		printf("\nThe priority queue is empty!");
	}

	return lptr;
}


void main()
{
	Node *lptr;
	lptr=NULL;

	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=DeleteProc(lptr);
	lptr=DeleteProc(lptr);
	lptr=DeleteProc(lptr);
	lptr=DeleteProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=InsertProc(lptr);
	lptr=DeleteProc(lptr);
	lptr=DeleteProc(lptr);
}