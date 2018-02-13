#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

typedef enum {FAILURE,SUCCESS}STATUS;
typedef enum {NO,YES}SUBSIDY;
typedef enum {FALSE,TRUE}BOOL;
typedef struct AadharData
{
	char AName[20];
	char AadharNumber[12];
	char Address[30];
	
}AData;
typedef struct AadharTag
{
	AData A;
	struct AadharTag *AadharNext;
}A_NODE;

typedef struct PANData
{
    AData AadharPan;
	char PANNumber[10];
}PData;
typedef struct PanTag
{
	PData P;
	struct PanTag *PANNext;
}P_NODE;

typedef struct BankData
{
	PData PanBank;
	char BankName[10];
	char AccountNumber[25];
	float Balance;
}BData;
typedef struct BankTag
{
	BData B;
	struct BankTag *BankNext;
}B_NODE;

typedef struct LPGData
{
	char Name[20];
	char AccountNumber[25];
	SUBSIDY value;
}LData;
typedef struct LPGTag
{
    LData L;
	struct LPGTag *LPGNext;
}L_NODE;
//Auxilliary Functions
void Menu();
void waitFor (unsigned int secs);
A_NODE* CreateAadharList(int n);
P_NODE* CreatePANList(int n);
void CreateBankList(int n);
void CreateLPGList(int n);
void DisplayAadharList(A_NODE *aptr);
void DisplayPANList(P_NODE *pptr);
void DisplayBankList(B_NODE *bptr);
void DisplayLPGList(L_NODE *lptr);
A_NODE* InsertAadharNode(A_NODE *AHead,AData *input);
P_NODE* InsertPANNode(P_NODE *PHead,PData *input);
B_NODE* InsertBankNode(B_NODE *BHead,BData *input);
L_NODE* InsertLPGNode(L_NODE *LHead,LData *input);

BOOL CompareAadharNodes(AData A1 , AData A2);

//Objective Functions
void AadharButNoPAN(A_NODE *aptr,P_NODE *pptr);
void MultiplePAN(P_NODE *pptr);
void MultipleBankAccounts(B_NODE *bptr);
void MoreSavingsThanX(float X,B_NODE *bptr,L_NODE *lptr);
void InconsistentData(A_NODE *aptr,P_NODE *pptr,B_NODE *bptr,L_NODE *lptr);



