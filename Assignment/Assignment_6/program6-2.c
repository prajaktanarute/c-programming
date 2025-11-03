#include<stdio.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkGreater
//  Description :    It is used to perform write a program which accept one number from user and check whether that number is greater than 100 or not
//  Input :          Bool,Int
//  Output :         Bool
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo >=100)
    {
        return true;
    }
    else
    {
        return false;
    }

}// End of ChkGreater

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{  
    int iValue = 0;
    bool bRet=false;

    printf("please enter Number\n");
    scanf("%d",iValue);

    bRet=ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("smaller");
    }

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 101    Output : Greater
//    Input1 : 39     Output : Smaller
//
///////////////////////////////////////////////////////////////////////