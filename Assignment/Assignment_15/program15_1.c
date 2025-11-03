#include<stdio.h>


//////////////////////////////////////////////////////////////////////
//  Function Name :  CountEven
//  Description :    It is used to perform write a program which accept number from user and count of even digits
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           26/10/2025
//
///////////////////////////////////////////////////////////////////////


int CountEven(int iNo)
{
    int iDigit=0, iFrequency=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }
    return iFrequency;

}// End of CountEven

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()

{
    int iValue=0;
    int iRet=0;

    printf("enter number\n");
    scanf("%d", &iValue);

    iRet=CountEven(iValue);

    printf("%d", iRet);

    return 0;

}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 2395      Output :  1
//     Input1 : 1018      Output :  2
//
///////////////////////////////////////////////////////////////////////