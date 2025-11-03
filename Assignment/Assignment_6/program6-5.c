#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Percentage
//  Description :    It is used to perform write a program which accept total marks & obtained marks from user and calculate percentage
//  Input :          Float,Int
//  Output :         Float
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

float Percentage (int iNo1, int iNo2)
{
    float fPercentage=0.0f;
    fPercentage = ((float)iNo2 / (float)iNo1) * 100.0;

    if(iNo1 == 0)
    {
        return 0.0f;
    }
    return fPercentage;
}// End of Percentage

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0f;

    printf("please enter  total marks");
    scanf("%d",&iValue1);


    printf("please enter  total marks");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1, iValue2);

    printf("Percentage is:%f",fRet);

    return 0;
}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 1000    Input1 : 745  Output : 74.5%
//
///////////////////////////////////////////////////////////////////////