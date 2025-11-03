#include<stdio.h>


///////////////////////////////////////////////////////////////////////
//
//  Function Name :  MultFact
//  Description :    It is used to perform write a program which accept number from user and Display its multiplication of factors
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int icnt=0;
    int iMult=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(icnt=1;icnt<=(iNo/2);icnt++)
    {
        if((iNo % icnt)== 0)
        {
            iMult=iMult*icnt;
        }
    }

    return iMult;
}// End of MultFact

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d\n",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 12     Output : 144
//    Input : 13     Output : 1
//    Input : 10     Output : 10
//
///////////////////////////////////////////////////////////////////////