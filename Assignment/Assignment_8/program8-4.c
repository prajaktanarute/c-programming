#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Table
//  Description :    It is used to perform write a program which accept number from user and display its table
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    
     int icnt=0;

    if(iNo<0)
    {
         iNo=-iNo;
    }

    for(icnt=1; icnt<+10; icnt++)
    {
        printf("%d\t",icnt*iNo);
    }


}// End of Table

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 2       Output : 2  4   6   8   10   12  14  16  18  20
//     Input1 : 5       Output : 5  10  15  20  25  30  35  40  45  50 
//     Input1 :-5       Output : 5  10  15  20  25  30  35  40  45  50
//
///////////////////////////////////////////////////////////////////////

