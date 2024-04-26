#include<stdio.h>
#include<stdlib.h>

typedef struct Node_tag
{
	char Name[10];
	int prior;
	struct Node_tag *next;
} Node;

typedef struct priorQ_tag
{
	Node* lptr[10];
	Node* last[10];
} priorQ;

Node* CreateProc();
void init_priorQ(priorQ*);
void DeleteProc(priorQ*);
void InsertProc(priorQ*);

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

void init_priorQ(priorQ *pQ)
{
	for(int i=0;i<10;i++)
	{
		pQ->lptr[i]=NULL;
		pQ->last[i]=NULL;
	}

}

void InsertProc(priorQ *pQ)
{

	Node *nptr=CreateProc();

	//printf("%d",nptr->prior);
	
	if((pQ->lptr[nptr->prior])==NULL)
	{
		//printf("Here");
		pQ->lptr[nptr->prior]=nptr;
		pQ->last[nptr->prior]=nptr;
	}
	else{

		(pQ->last[nptr->prior])->next=nptr;
		pQ->last[nptr->prior]=nptr;
	}
}	

void DeleteProc(priorQ *pQ)
{
	Node *ptr;
	int i=0,flag=0;

	while((i!=10)&&(flag==0))
	{
		if((pQ->lptr[i])==NULL)
		{
			//ptr=pQ->lptr[i];
			i++;
		}
		else{
			flag=1;
			printf("\nThe process %s with priority %u has been executed",pQ->lptr[i]->Name,pQ->lptr[i]->prior);
			ptr=pQ->lptr[i];
			pQ->lptr[i]=(pQ->lptr[i])->next;
			free(ptr);
		}
	}
	if(i==10)
	{
		printf("\nThe priority queue is empty!");
	}
	
}

void main()
{
	priorQ pQ;

	init_priorQ(&pQ);
	InsertProc(&pQ);
	InsertProc(&pQ);
	InsertProc(&pQ);
	DeleteProc(&pQ);
	DeleteProc(&pQ);
	InsertProc(&pQ);
	InsertProc(&pQ);
	DeleteProc(&pQ);
}