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
