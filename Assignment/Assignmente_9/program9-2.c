#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :   DollarToINR
//  Description :    It is used to perform write a program which accept amount in US doller and its return its corresponding value in Indian Currency consider 1$ as 70 rupees
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iAns=0;
    iAns=iNo*70;
    return iAns;


}// End of DollarToINR

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

    iRet=DollarToINR(iValue);

    printf("value in INR is %d",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 10          Output : 700
//     Input1 : 3           Output : 270
//     Input1 : 1200        Output : 84000
//
///////////////////////////////////////////////////////////////////////