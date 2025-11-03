#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  MultipleDisplay
//  Description :    It is used to perform write a program which accept  N and print first 5 multiples of N
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        
        
            printf("%d\t",iCnt*iNo);
        
    }
}// End  of MultipleDisplay

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

    MultipleDisplay(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 4       Output : 4  8   12  16  20
//
///////////////////////////////////////////////////////////////////////