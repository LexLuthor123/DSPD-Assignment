
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
		head = InsertPANNode(head,&insert);
		printf("-----------------------------------------------------------------------------\n");
    }
	return head;
}

P_NODE* InsertPANNode(P_NODE *PHead,PData *input)
{
	P_NODE *ptr;
	ptr = (P_NODE *)malloc(sizeof(P_NODE));
	ptr->P = *input;
	ptr->PANNext = PHead;
	PHead = ptr;
	return PHead;
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
		head = InsertAadharNode(head,&insert);
		printf("-----------------------------------------------------------------------------\n");
    }
	return head;
}
A_NODE* InsertAadharNode(A_NODE *aptr,AData *input)
{
	A_NODE *ptr;
	ptr = (A_NODE *)malloc(sizeof(A_NODE));
	ptr->A = *input;
	ptr->AadharNext = aptr;
	aptr = ptr;
	return aptr;
}
