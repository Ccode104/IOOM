#include<stdio.h>
#include<stdlib.h>


Node* CreateProc()
{
	Node *nptr=(Node*)malloc(sizeof(Node));
	
	printf("\nEnter the name of the process: ");
	scanf("%c",nptr->Name);
	printf("\nEnter the priority: ");
	scanf("%u",nptr->prior);

	nptr->next=NULL;

	return nptr;
}

Node* InsertProc(Node *lptr)
{
	Node *nptr=CreateProc();
	Node *ptr=lptr;
	Node *prev=NULL;

	unsigned int flag=0;

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
			}
		}

		//Insert the process
		nptr->next=ptr;
		prev->next=nptr;
	}
	
	return lptr;
}

Node* DeleteProc(Node *lptr)
{
	Node *ptr=lptr;

	if(ptr!=NULL)
	{
		printf("\nThe process %c with priority %u has been executed",ptr->Name,ptr->prior);
		lptr=lptr->next;
		free(ptr);
	}
	else{
		printf("The priority queue is empty!");
	}

	return lptr;
}

