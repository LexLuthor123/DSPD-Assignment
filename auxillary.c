

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

void DisplayAadharList(A_NODE *aptr)
{
	A_NODE *ptr;
	ptr = aptr;
	int i = 1;
	while(ptr != NULL)
	{
		//waitFor(3);	
		printf("-----------------------------------------------\n");
		printf("Entry No. %d) \n",i);
		printf("* Name: %s\n",(ptr->A).AName);
		printf("* Aadhar Number: %s\n",(ptr->A).AadharNumber);
		printf("* Address: %s\n",(ptr->A).Address);
		printf("-----------------------------------------------\n");
		ptr = ptr->AadharNext;
		i++;	
	}
	waitFor(8);
}
void waitFor (unsigned int secs)
{
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}
