
#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  FindLargest
//  Description :    It is used to perform Find Largest Among Three Numbers
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
//////////////////////////////////////////////////////////////////////


int FindLargest(int x, int y,int z)
{
    
      if(x>=y && x>=z)
      {
        return x;
      }

      else if(y>=x && y>=z)
      {
        return y;
      }

      else
      {
        return z;
      }
}// End of FindLargest

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int a,b,c,result;
    printf("Enter three numbers:");
    scanf("%d %d %d ",&a,&b,&c);

    result = FindLargest(a,b,c);
    printf("Largest number is:%d\n",result);


    return 0;
}// End of main

//////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : 3   Input : 5  Input : 2    Output : Largest number is : 5
//    Input : 4   Input : 2  Input : 7    Output : Largest number is : 7
//    Input : 8   Input : 5  Input : 6    Output : Largest number is : 8
//
///////////////////////////////////////////////////////////////////////