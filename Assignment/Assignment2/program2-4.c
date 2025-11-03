
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform Accept Two numbers from user and display first number in second number of times 
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////



void Display(int iNo,int iFrequency)
{
    int icnt=0;
    
    if(iNo < 0)
    {
        iNo=-iNo;
    }

    if(iFrequency < 0)
    {
        iFrequency=-iFrequency;
    }

    for(icnt=0; icnt<iFrequency; icnt++)
    {
        printf("%d\t",iNo);
    }
}//End of Display

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int icount = 0;

    printf("Enter a number\t");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&icount);


    Display(iValue,icount);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 12  Input :5   Output : 12 12 12 12 12
//    Input1 : -2  Input :3   Output : -2 -2 -2   
//    Input1 : 21  Input :-3  Output : 21 21 21
//
///////////////////////////////////////////////////////////////////////



