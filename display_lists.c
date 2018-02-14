//#include "headerfile.h"

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
void DisplayPANList(P_NODE *pptr)
{
	P_NODE *ptr;
	ptr = pptr;
	int i = 1;
	while(ptr != NULL)
	{
		//waitFor(3);	
		printf("-----------------------------------------------\n");
		printf("Entry No. %d) \n",i);
		printf("* Name: %s\n",(ptr->P).AadharPan.AName);
		printf("* Aadhar Number: %s\n",(ptr->P).AadharPan.AadharNumber);
		printf("* Address: %s\n",(ptr->P).AadharPan.Address);
		printf("* Pan Number : %s\n",(ptr->P).PANNumber);
		printf("-----------------------------------------------\n");
		ptr = ptr->PANNext;
		i++;	
	}
	waitFor(8);
}
void waitFor (unsigned int secs)
{
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}
void AadharButNoPAN(A_NODE *aptr,P_NODE *pptr)
{
	
}
