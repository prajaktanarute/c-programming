#include<stdio.h>


//////////////////////////////////////////////////////////////////////
//  Function Name :  CountTwo
//  Description :    It is used to perform write a program which accept number from user and count frequency of 2 in it
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           26/10/2025
//
///////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit=0, iFrequency=0;

    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }
    return iFrequency;

}// End of  CountTwo

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    int  iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);

    printf("%d",iRet);

    return 0;

}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 2395      Output :  1 
//     Input1 : 1018      Output :  0
//
///////////////////////////////////////////////////////////////////////