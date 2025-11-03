#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  NonFact
//  Description :    It is used to perform write a program which accept number from user and display all its non factors
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int icnt = 0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(icnt=1; icnt<=iNo; icnt++)
    {
        if((iNo % icnt)!= 0)
        {
            printf("%d\t",icnt);
        }
    }
}// End of NonFact

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 12     Output : 5  7  8  9  10  11
//    Input : 13     Output : 2  3  4  5  6   7  8  9  10  11  12
//    Input : 10     Output : 3  4  6  7  8   9
//
///////////////////////////////////////////////////////////////////////