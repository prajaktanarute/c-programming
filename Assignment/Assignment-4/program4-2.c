#include<stdio.h>


///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FactRev
//  Description :    It is used to perform write a program which accept number from user and print even factors in decreasing order
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
   int icnt=0;

   if(iNo<=0)
   {
    iNo=-iNo;
   }

   for(icnt=(iNo/2); icnt>=1; icnt--)
   {
     if((iNo % icnt)== 0)
      {
        printf("%d\t",icnt);
      }
   }


}// End of FactRev

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

    FactRev(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 12     Output : 6  4  3  2   1
//    Input : 13     Output : 1
//    Input : 10     Output : 5  2   1
//
///////////////////////////////////////////////////////////////////////