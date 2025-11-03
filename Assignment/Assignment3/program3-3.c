#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  DisplayEvenFactor
//  Description :    It is used to perform write a program which accept number from user and print even factors that number
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo=-iNo;
    }
    for(i=1; i<=(iNo/2);i++)
    {
        if((iNo % i)==0 && (i % 2)==0)
        {
             printf("%d\t",i);
        }
    }
}// End of DisplayEvenFactor

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

    DisplayEvenFactor(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 36     Output : 2 4 12 18
// 
///////////////////////////////////////////////////////////////////////