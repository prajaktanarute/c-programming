#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FindMax
//  Description :    It is used to perform Find maximum of Two numbers
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////

int FindMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}// End of FindMax

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{

    int num1,num2,result;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1,num2);
    printf("Maximum is:%d\n",result);
    return 0;
}


///////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 51   Input : 5    Output : 5
//    Input : 4    Input : 5    Output : 5 
//    Input : 6    Input : 5    Output : 6
//    Input : 3    Input : 2    Output : 3 
//
///////////////////////////////////////////////////////////////////////