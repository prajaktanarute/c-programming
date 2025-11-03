#include<stdio.h>

 
///////////////////////////////////////////////////////////////////////
//
//  Function Name :  EvenFactorial
//  Description :    It is used to perform write a program to find even factorial of given number
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            iFact = iFact*iCnt;
        }
    }
    return iFact;


}// End of EvenFactorial

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0, iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("EvenFactorial of number is %d",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5           Output : 8
//     Input1 :-5           Output : 8
//     Input1 : 10          Output : 3840
//
///////////////////////////////////////////////////////////////////////