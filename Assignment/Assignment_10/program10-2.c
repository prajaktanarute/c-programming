#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  RectArea
//  Description :    It is used to perform write a program which accept width & height of rectangle from user and calculate its area.(Area = Width * Height)
//  Input :          Float,Double
//  Output :         Double
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

double RectArea(float fwidth, float fHeight)
{
    double dAns=0.0;
    dAns = fwidth * fHeight;
    return dAns;

}// End of RectArea

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2=0.0f;
    double dRet = 0.0;

    printf("Enter Width");
    scanf("%f",&fValue1);

    printf("Enter Height");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangle:%lf",dRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5.3  9.78          Output : 51.834
//
///////////////////////////////////////////////////////////////////////