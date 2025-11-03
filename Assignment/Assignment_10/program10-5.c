#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  SquareMeter
//  Description :    It is used to perform write a program which accept area in square feet and convert it square meter
//  Input :          Int,Double
//  Output :         Double
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

double SquareMeter(int iSqFeet)
{
    double dAns = 0.0;
    dAns = (double) iSqFeet * 0.0929;
    return dAns;
}// End of  SquareMeter

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in SquareMeter %lf ",dRet);
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5           Output : 0.464515
//     Input1 : 7           Output : 0.650321
//
///////////////////////////////////////////////////////////////////////