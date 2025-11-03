#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  OddDisplay
//  Description :    It is used to perform write a program which accept N from user and print all odd numbers up to N
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////


void OddDisplay(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt %2 !=0)
        {
            printf("%d\t",iCnt);
        }
    }
}// End of OddDisplay

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 18       Output : 1    3    5    7    9    11    13
//
///////////////////////////////////////////////////////////////////////