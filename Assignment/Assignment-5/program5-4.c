#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckNumberType
//  Description :    It is used to perform Check Positive,Negative,or Zero
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////


void CheckNumberType(int num)
{
    if(num>0)
    {
            printf("%d is positive number",num);
    }
    else if(num<0)
    {
            printf("%d is negative number",num);
    }

    else
    {
        printf("%d is zero number",num);
    }
}// End of CheckNumberType

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
    CheckNumberType(number);
    return 0;
}// End of main

//////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 5    Output : 5 is positive number
//    Input : 0    Output : 0 is  zero number
//    Input :-3    Output : -3 is  negative number
//
///////////////////////////////////////////////////////////////////////