
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");

    }
    else
    {
         printf("Demo");
    }
}// End of Display

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
}// End of main 

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 12    Output : Demo
//    Input1 : 2     Output : Hello
//    Input1 : 10    Output : Demo
//    Input1 : 4     Output : Hello
//
///////////////////////////////////////////////////////////////////////


