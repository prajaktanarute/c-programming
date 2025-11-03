#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  CircleArea
//  Description :    It is used to perform write a program which accept radius of circle from user and calculate its area consider value of PI as 3.14
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
   double dAns=0.0;
   float PI=3.14f;

   dAns =PI * fRadius * fRadius;
}// End of CircleArea

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is:%lf",dRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5.3           Output : 88.2026
//     Input1 : 10.4          Output : 339.6224
//
///////////////////////////////////////////////////////////////////////