#include<stdio.h>


///////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChkVowel
//  Description :    It is used to perform write a program which accept on character from user whether that character is vowel(a,e,i,o,u)or not
//  Input :          Bool,Bool
//  Output :         Char
//  Auther :         Prajakta Rajendra Narute.
//  Date :           19/10/2025
//
///////////////////////////////////////////////////////////////////////



typedef int Bool;

#define TRUE 1
#define FALSE 0

Bool ChkVowel(char cValue)
{
    if(cValue=='a ' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u'||
    cValue=='A' ||cValue=='E' ||cValue=='I' || cValue=='O' || cValue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}// End of ChkVowel

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char CValue = '\0';
    Bool bRet = FALSE;

    printf("Enter Character");
    scanf("%c",&CValue);

    bRet=ChkVowel(CValue);

    if(bRet == TRUE )
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");  
    }
    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//    Input : E     Output : TRUE
//    Input : d     Output : FALSE
// 
///////////////////////////////////////////////////////////////////////