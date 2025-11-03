#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FactorialDiff
//  Description :    It is used to perform write a program which returns difference between Even factorial and odd factorial of given number
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEvenFact=1, iOddFact=1;

    if(iNo < 0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            iEvenFact = iEvenFact*iCnt;
        }
        else
        {
            iOddFact=iOddFact*iCnt;
        }
    }
     return iEvenFact-iOddFact;

}// End of FactorialDiff

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

    iRet=FactorialDiff(iValue);

    printf("Factorial difference of number is %d",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5           Output : -7
//     Input1 :-5           Output : -7
//     Input1 : 10          Output : 2895
//
///////////////////////////////////////////////////////////////////////