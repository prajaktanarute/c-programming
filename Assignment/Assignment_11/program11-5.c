
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//  Function Name :  RangeDisplay
//  Description :    It is used to perform write a program which accept range from user and all numbers in between that range in reverse order
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

     for(icnt=iEnd; icnt<=iStart; icnt--)
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
//     Input1 : 23      Input1 : 35     Output : 35  34  33  31  30  29  28  27  26  25  24  23
//     Input1 : 10      Input1 : 18     Output : 18  17  16  15  14  13  12  11  10
//     Input1 : 10      Input1 : 10     Output : 10
//     Input1 :-10      Input1 : 2      Output :2    1   0  -1  -2  -3  -4  -5   -6  -7  -8   -9  -10
//     Input1 : 90      Input1 : 18     Output :Invalid range  
//
///////////////////////////////////////////////////////////////////////

