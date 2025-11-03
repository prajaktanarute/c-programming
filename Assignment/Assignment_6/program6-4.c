#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Multyply
//  Description :    It is used to perform write a program which accept three numbers and print its multiplication
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

int Multyply(int iNo1,int iNo2, int iNo3)
{
    int iMult=0;
    iMult = iNo1 * iNo2 * iNo3;
    return iMult;

}// End of Multyply

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multyply(iValue1, iValue2, iValue3);

    printf("Multiplication of three number is:%d",iRet);

    return 0;

}// End of main


///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input1 : 5  4  7   Output : 140
//    Input1 : 5  0  7   Output : 35
//    Input1 : 5  0  0     Output : 5
//
///////////////////////////////////////////////////////////////////////
