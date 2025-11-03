#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  PrintEven
//  Description :    It is used to perform write a program which accept one number from user and print that number of even numbers on screen
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int icnt,iEven=2;

    if(iNo<= 0)
    {
        return;
    }

    for(icnt=1; icnt<=iNo;icnt++)
    {
        printf("%d\t",iEven);
        iEven=iEven+2;
    }

    
} // End of PrintEven

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

    PrintEven(iValue);
    
    
    return 0;
}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 7     Output : 2 4 6 8 10 12 14
// 
///////////////////////////////////////////////////////////////////////

