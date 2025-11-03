#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  RangeDisplay
//  Description :    It is used to perform write a program which accept range from user and display all numbers in between
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           24/10/2025
//
///////////////////////////////////////////////////////////////////////


void RangeDisplay(int iStart,int iEnd)
{
     int icnt = 0;

     if(iEnd<iStart)
     {
        printf("Invalid Range");
     }

     for(icnt=iStart; icnt<=iEnd; icnt++)
    {
        printf("%d\t",icnt);
    }



}// End of RangeDisplay

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
//     Input1 : 23      Input1 : 35     Output : 23  24  25  26  27  28  29  30  32  33  34  35
//     Input1 : 10      Input1 : 18     Output : 10  11  12  13  14  15  16  17  18
//     Input1 : 10      Input1 : 10     Output : 10  
//     Input1 :-10      Input1 : -2     Output :-10  -11  -12  -13  -14  -15  -16  -17 -18
//     Input1 : 90      Input1 : 18     Output :  Invalid range
//
///////////////////////////////////////////////////////////////////////

