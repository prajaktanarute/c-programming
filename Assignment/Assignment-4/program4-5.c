
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FactDiff
//  Description :    It is used to perform write a program which accept number from user and return difference between summation of all its factors and non factors
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
      int icnt = 0;
      int iFactorsum=0,iNonFactorsum=0;

      if(iNo<=0)
      {
        iNo=-iNo;
      }

      for(icnt=1; icnt<iNo; icnt++)
      {
        if((iNo % icnt)==0)
        {
            iFactorsum=iFactorsum+icnt;
        }
        else
        {
            iNonFactorsum=iFactorsum+icnt;
        }
      }

      return iNonFactorsum-iFactorsum;

}// End of FactDiff

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}// End of main

//////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 12     Output : -34
//    Input : 10     Output : -29
//
///////////////////////////////////////////////////////////////////////