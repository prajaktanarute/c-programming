#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform Accept one number from user and print that number of * on screen
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int icnt =0;

    if(iNo < 0) 
    {
        iNo=-iNo;
    }  
    
    while(icnt < iNo)
    {
        printf(" * \t");
        icnt++;
    }

} // End of Display

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
} // End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 4     Output : *   *   *   *
//    Input1 : 2     Output : *   *
//    Input1 : 5     Output : *   *   *    *    *
//    Input1 : 6     Output : *   *   *    *    *    *
//
///////////////////////////////////////////////////////////////////////