#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform write a program which accept number from user and display below pattern
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        
            printf("*\t");
        
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        
            printf("#\t");
        
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
//     Input1 : 2       Output : *  *   #   #
//     Input1 : 5       Output : *  *   *   *   *   #   #   #   #   #
//     Input1 :-5       Output :  *  *   *   *   *   #   #   #   #   #
//
///////////////////////////////////////////////////////////////////////