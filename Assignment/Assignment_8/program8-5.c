#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  TableRev
//  Description :    It is used to perform write a program which accept number from user and display its table in reverse
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=10; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}// End of TableRev

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

    TableRev(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 2       Output : 20 18  16  14  12  10  8   6   4   2
//     Input1 : 5       Output : 50 45  40  35  30  25  20  15  10  5
//     Input1 :-5       Output : 50 45  40  35  30  25  20  15  10  5
//
///////////////////////////////////////////////////////////////////////