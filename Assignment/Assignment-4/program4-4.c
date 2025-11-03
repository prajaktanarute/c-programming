#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  SumNonFact
//  Description :    It is used to perform write a program which accept number from user and return summation of all its non factors
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int icnt = 0;
    int isum = 0;
    
    if(iNo<=0)
   
    {
        iNo=-iNo;
    }

    for(icnt=1; icnt<=iNo; icnt++)
    {
        if((iNo % icnt)!= 0)
        {
            isum=isum+icnt;
        }
    }

    return isum;

}// End of SumNonFact

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

     iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 12     Output : 50
//    Input : 10     Output : 37
//
///////////////////////////////////////////////////////////////////////