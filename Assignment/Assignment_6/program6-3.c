#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkEqual
//  Description :    It is used to perform write a program which accept Two numbers and whether numbers are equal or not 
//  Input :          Bool,Int
//  Output :         Bool
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////


bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }

}// End of ChkEqual

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;

    printf("Please enter two Number\n");
    scanf("%d%d", &iValue1,&iValue2);

    bRet=ChkEqual(iValue1, &iValue2);

    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 10 10    Output : Equal
//    Input1 : 10 12    Output : Not Equal
//    Input1 : 10 -10    Output : Not Equal
//
///////////////////////////////////////////////////////////////////////