

#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckLeapYear
//  Description :    It is used to perform Check Leap Year
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if((year % 4== 0) && (year % 400 == 0) || (year % 100 != 0))
    {
        printf("%d is a Leap year\n",year);
    }
    else
    {
        printf("%d is not a Leap year\n",year);
    }
}// End of CheckLeapYear

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int yr;
    printf("Enter year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}// End of main 

//////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 2000    Output : 2000 is a Leap  year
//    Input : 1900    Output : 1900 is not a Leap year
//
///////////////////////////////////////////////////////////////////////