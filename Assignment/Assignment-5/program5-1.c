
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckEvenOdd
//  Description :    It is used to perform Check Even or Odd
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////


void CheckEvenOdd(int num)
{
    if((num % 2)== 0)
    {
        printf("number is Even");
    }

    else
    {
        printf("Number is Odd");
    }

}// End of CheckEvenOdd

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 5     Output : Number is Odd
//    Input : 4     Output :  Number is Even 
//    Input : 6     Output :  Number is Even 
//    Input : 3     Output :  Number is Odd 
//
///////////////////////////////////////////////////////////////////////