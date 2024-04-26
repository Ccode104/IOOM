typedef struct Node_tag
{
	char Name;
	unsigned int prior;
	Node *next;
} Node;


Node* InsertProc();
Node* DeleteProc();
Node* CreateProc();