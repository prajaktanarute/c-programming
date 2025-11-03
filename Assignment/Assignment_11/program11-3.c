
#include<stdio.h>


///////////////////////////////////////////////////////////////////////
//  Function Name :  RangeSum
//  Description :    It is used to perform write a program which accept range from user return addition of all numbers in between that range 
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           24/10/2025
//
///////////////////////////////////////////////////////////////////////


int RangeSum(int iStart,int iEnd)
{
     int icnt = 0;

     int iAddition=0;



     if(iStart < 0 || iEnd < 0 || iEnd<iStart)
     {
        return 0;
     }

     for(icnt=iStart; icnt<=iEnd; icnt++)
    {
        iAddition = iAddition + icnt;
    }

    return iAddition;



}// End of RangeSum

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    
    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet == 0)
    {
        printf("invalid range");
    }

    else
    {
        printf("Addition is %d",iRet);
    }



    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 23      Input1 : 30     Output : 212
//     Input1 : 10      Input1 : 18     Output : 126
//     Input1 : 10      Input1 : 2      Output : Invalid range
//     Input1 : 90      Input1 : 18     Output : Invalid range
//
///////////////////////////////////////////////////////////////////////

