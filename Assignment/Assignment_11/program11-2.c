#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  RangeDisplayEven
//  Description :    It is used to perform write a program which accept range from user and display all numbers in between
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           24/10/2025
//
///////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart,int iEnd)
{
     int icnt = 0;

     if(iEnd<iStart)
     {
        printf("Invalid Range");
     }

     for(icnt=iStart; icnt<=iEnd; icnt++)
    {
        if((icnt % 2) == 0)
        {

            printf("%d\t",icnt);
        }
    }



}//  End of RangeDisplayEven

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    
    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;

}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 23      Input1 : 35     Output : 24  26  28  30  32  34  
//     Input1 : 10      Input1 : 18     Output : 10  12  14  16  18
//     Input1 : 10      Input1 : 10     Output : 10  
//     Input1 :-10      Input1 : 2      Output :-10  -8   -6   -4   -2  0   2
//     Input1 : 90      Input1 : 18     Output :  Invalid range
//
///////////////////////////////////////////////////////////////////////