#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Pattern
//  Description :    It is used to perform Division
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int  icnt=0;

    if(iNo <= 0)
    {
        iNo=-iNo;
    }

    for(icnt=1; icnt<=iNo; icnt++)
    {
        printf("$\t*\t");
    }
}// End of Pattern

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

    Pattern(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 :    5   Output : $   *    $   *   $   *    $    *    $    *  
//     Input1 :    3   Output : $   *    $   *   $   *
//     Input1 :   -3   Output : $   *    $   *   $   *
//
///////////////////////////////////////////////////////////////////////