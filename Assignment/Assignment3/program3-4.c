#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  DisplayConvert
//  Description :    It is used to perform Accept one character from userand convert case of that character
//  Input :          char,char
//  Output :         char
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue)>='a'&& cValue<='z')
    {
        cValue=cValue-32;
        printf("%c\t",cValue);
    }
    else if((cValue>='A' && cValue<= 'Z'))
    {
        cValue=cValue+32;
        printf("%c\t",cValue);
    }
}// End of DisplayConvert

// Time complexity: o(N)

///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : a     Output : A
//    Input : D     Output : d
// 
///////////////////////////////////////////////////////////////////////