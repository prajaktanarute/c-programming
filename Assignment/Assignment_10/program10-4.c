#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FhtoCs
//  Description :    It is used to perform write a program which accept temperature in Fahrenheit and convert it into celsius.(1 celsius = (Fahrenheit-32)*(5/9))
//  Input :          Float,Double
//  Output :         Double
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
   double dAns = 0.0;
   dAns = (fTemp  -32) * (5.0/ 9.0);
   return dAns;

}// End of FhtoCs

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

    printf("Enter temperature in Fahrenheit\n");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf("%lf Celsius",dRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 10           Output : -12.2222
//     Input1 : 34           Output :  1.11111
//
///////////////////////////////////////////////////////////////////////