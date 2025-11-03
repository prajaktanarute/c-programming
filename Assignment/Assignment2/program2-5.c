#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkEven
//  Description :    It is used to perform Accept  number from user and check whether number is even or odd
//  Input :          Bool,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////


bool ChkEven(int iNo)
{
    if((iNo %2)== 0)
    {
        return true;
    }

    else
    {
        return false;
    }
} //End of chkEven

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);


    if(bRet == true)
    {
        printf("this is even number");
    }

    else
    {
        printf("this is odd number");

    }

    return 0;

}//End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 5      Output : this is odd number
//    Input1 : 4     Output : this is even  number
//    Input1 : 9      Output : this is odd number
//    Input1 : 6     Output : this is even number number
//
///////////////////////////////////////////////////////////////////////
