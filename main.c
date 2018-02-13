#include "headerfile.h"
#include "create_lists.c"
#include "display_lists.c"

void main()
{
	int flag = 1;
	A_NODE *listA;
	int option;
	while(flag)
	{
          	Menu();
			printf("\tEnter appropriate Option: ");
			scanf("%d",&option);
			switch(option)
			{
			case 1: 
		    	printf("You have Entered to Aadhar List \n");
		    	int num;
		    	printf("Enter How many Entries You want to enter in the List: ");
		    	scanf("%d",&num);
		    	printf("\n");
		    	system("cls");
		    	listA = CreateAadharList(num);
		    	break;
			case 5:
				system("cls");
				printf("The Required List is as following: \n");
				DisplayAadharList(listA);
				break;
			default:
		    	printf("Options UnAvailable. Work in Progress!!\n");
		    	flag = 0;
				break;	    
			}
    }
}
void Menu()
{
	system("cls");
	printf("*****************************************************************************************\n");
	printf("\t1) Enter Aadhar Details.\n");
	printf("\t2) Enter PAN Details.\n");
	printf("\t3) Enter Bank Account Details.\n");
	printf("\t4) Enter LPG Subscription Details.\n");
	printf("\t5) Display Aadhar Details.\n");
	printf("\t6) Display PAN Details.\n");
	printf("\t7) Display Bank Account Details.\n");
	printf("\t8) Display LPG Subscription Details.\n\n");
	printf("\t Press 0 to close\n");
	printf("*****************************************************************************************\n");
}

