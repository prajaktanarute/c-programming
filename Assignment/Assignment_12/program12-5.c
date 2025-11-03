#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
//  Function Name :  is_divisible_by_five
//  Description :    It is used to perform Check if number is divisible by 5
//  Input :          Int,Bool
//  Output :         string
//  Auther :         Prajakta Rajendra Narute.
//  Date :           25/10/2025
//
///////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    if((number % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of is_divisible_by_five

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    
    printf("%s\n",is_divisible_by_five(number)? "Yes" : "No");
    return 0;
}//  End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 5      Output :  Yes
//     Input1 : 4      Output :  No
//
///////////////////////////////////////////////////////////////////////



