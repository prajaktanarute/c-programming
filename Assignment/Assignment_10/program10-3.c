#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  RectArea
//  Description :    It is used to perform write a program which distance in kilometre and convert it into meter(1 kilometre = 1000 Meter)
//  Input :          Int ,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iAns=0;
    iAns=iNo*1000;
    return iAns;
}// End of  KMToMeter

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
   int iValue=0, iRet=0;

   printf("enter distance\n");
   scanf("%d",&iValue);

   iRet=KMToMeter(iValue);

   printf("%d meter",iRet);

   return 0;


}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5           Output : 5000
//     Input1 : 12          Output : 12000
//
///////////////////////////////////////////////////////////////////////
