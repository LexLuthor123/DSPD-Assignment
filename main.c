#include "headerfile.h"
#include "create_lists.c"
#include "display_lists.c"

void main()
{
	int flag = 1, num, option;
	A_NODE *listA;
	P_NODE *listP; 
	while(flag)
	{
          	Menu();
			printf("\tEnter appropriate Option: ");
			scanf("%d",&option);
			switch(option)
			{
			case 1: 
		    	printf("You have Entered to Aadhar List \n");
		    	printf("Enter How many Entries You want to enter in the List: ");
		    	scanf("%d",&num);
		    	printf("\n");
		    	system("cls");
		    	listA = CreateAadharList(num);
		    	break;
		    case 2:
		    	printf("You have Entered the Pan Details option \n");
		    	printf("Enter How many Entries You want to enter in the List: ");
		    	scanf("%d",&num);
		    	printf("\n");
		    	system("cls");
		    	listP = CreatePANList(num);
		    	break;
			case 5:
				system("cls");
				printf("The Required List is as following: \n");
				DisplayAadharList(listA);
				break;
			case 6:
				system("cls");
				printf("The Required List is as following: \n");
				DisplayPANList(listP);
				break;
			case 9:	/* Print the data of those people who have valid Aadhar info but no PAN info */
				system("cls");
				
				if(listA!=NULL && listP != NULL)
				{
					AadharButNoPAN(listA,listP);
				}
				else
				{
					printf("Either of the List is empty. Try Again!!\n");
					waitFor(5);
				}
				break;
			case 0:
				printf("Thank You!!!\n");
				flag = 0;
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
	printf("Data Input Functions: \n");
	printf("\t1) Enter Aadhar Details.\n");
	printf("\t2) Enter PAN Details.\n");
	printf("\t3) Enter Bank Account Details.\n");
	printf("\t4) Enter LPG Subscription Details.\n");
	printf("Display Functions: \n");
	printf("\t5) Display Aadhar Details.\n");
	printf("\t6) Display PAN Details.\n");
	printf("\t7) Display Bank Account Details.\n");
	printf("\t8) Display LPG Subscription Details.\n");
	printf("Objective Functions: \n");
	printf("\t9) Print the data of those people who have valid Aadhar info but no PAN info\n");
	printf("\t Press 0 to close\n");
	printf("*****************************************************************************************\n");
}

