#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Number
//  Description :    It is used to perform write a program which accept  number from user is less than 50 then print small, if it is greater than 50 and less than 50 and less than 100 then print medium,if it is greater than 100 then print large
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    

    if(iNo<50)
    {
         printf("small");
    }

    else if(iNo>50 && iNo<100)
    {
        printf("medium");
    }

    else
    {
        printf("invalid input");
    }


}// End of Number

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 75       Output : Medium
//
///////////////////////////////////////////////////////////////////////