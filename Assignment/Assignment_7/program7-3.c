#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform write a program which accept number from user and print its numbers line
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=-iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}// End of Display

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

    Display(iValue);

    return 0;
}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 4      Output : -4  -3  -2  -1  0  1   2   3   4
//
///////////////////////////////////////////////////////////////////////