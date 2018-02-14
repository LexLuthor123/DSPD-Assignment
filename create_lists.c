
P_NODE* CreatePANList(int n)
{
	P_NODE *head;
	PData insert;
	head = NULL;
	int i;
	waitFor(3);
	for(i=0;i<n;i++)
	{
		printf("----------------------------------------------------------------------------\n");
		printf("* Enter Name: ");
		scanf("%s",insert.AadharPan.AName);
		printf("\n");
		printf("* Enter Aadhar Number: ");
		scanf("%s",insert.AadharPan.AadharNumber);
		printf("\n");
		printf("* Enter Address: ");
		scanf("%s",insert.AadharPan.Address);
		printf("\n");
		printf("* Enter PAN Number: ");
		scanf("%s",insert.PANNumber);
		printf("\n");
	    InsertPANNode(&head,insert);
		printf("-----------------------------------------------------------------------------\n");
    }
	return head;
}

void InsertPANNode(P_NODE **PHead,PData input)
{
	P_NODE *new_node,*current;
	new_node = (P_NODE *)malloc(sizeof(P_NODE));
	(new_node->P) = input;
	new_node->PANNext = NULL;
	   // Special case for the head end 
    if (*PHead == NULL || strcmp ( (  ((*PHead)->P).AadharPan.AadharNumber) , ( (new_node->P).AadharPan.AadharNumber ) ) >= 0)
    {
        new_node->PANNext = *PHead;
        *PHead = new_node;
    }
    else
    {
        // Locate the node before the point of insertion 
        current = *PHead;
        while (current->PANNext!=NULL &&
              strcmp ( ((current->PANNext->P).AadharPan).AadharNumber, ((new_node->P).AadharPan).AadharNumber ) < 0)
        {
            current = current->PANNext;
        }
        new_node->PANNext = current->PANNext;
        current->PANNext = new_node;
    }
}

A_NODE* CreateAadharList(int n)
{
	A_NODE *head;
	AData insert;
	head = NULL;
	int i;
	waitFor(3);
	for(i=0;i<n;i++)
	{
		printf("----------------------------------------------------------------------------\n");
		printf("* Enter Name: ");
		scanf("%s",insert.AName);
		printf("\n");
		printf("* Enter Aadhar Number: ");
		scanf("%s",insert.AadharNumber);
		printf("\n");
		printf("* Enter Address: ");
		scanf("%s",insert.Address);
		printf("\n");
		InsertAadharNode(&head,insert);
		printf("-----------------------------------------------------------------------------\n");
    }
	return head;
}
void InsertAadharNode(A_NODE **aptr,AData input)
{
	A_NODE *new_node,*current;
	new_node = (A_NODE *)malloc(sizeof(A_NODE));
	new_node->A = input;
	new_node->AadharNext = NULL;
	   // Special case for the head end 
    if (*aptr == NULL || strcmp (((*aptr)->A).AadharNumber, (new_node->A).AadharNumber ) >= 0)
    {
        new_node->AadharNext = *aptr;
        *aptr = new_node;
    }
    else
    {
        // Locate the node before the point of insertion 
        current = *aptr;
        while (current->AadharNext!=NULL &&
              strcmp ( (current->AadharNext->A).AadharNumber, (new_node->A).AadharNumber ) < 0)
        {
            current = current->AadharNext;
        }
        new_node->AadharNext = current->AadharNext;
        current->AadharNext = new_node;
    }
}

