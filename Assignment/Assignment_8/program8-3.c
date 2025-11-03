#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Factorial
//  Description :    It is used to perform write a program  to find factorial of given number
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo < 0)
    {
         iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
     
     return iFact;

}// End of Factorial

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0, iRet=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is %d",iRet);


    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5       Output : 120
//     Input1 :-5       Output : 120 
//     Input1 : 4       Output : 24
//
///////////////////////////////////////////////////////////////////////