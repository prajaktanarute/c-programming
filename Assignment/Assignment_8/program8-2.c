#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    It is used to perform write a program which accept  single digit number from user and print it into word
//  Input :          Int,Int
//  Output :         Int
//  Auther :         Prajakta Rajendra Narute.
//  Date :           20/10/2025
//
///////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    

    if(iNo <= 0)
    {
         iNo=-iNo;
    }

    switch(iNo)
    {
        case 1:
                 printf("one");
                 break;

        case 2:
                 printf("Two");
                 break;   
                 
        case 3:
                 printf("Three");
                 break; 
                 
        case 4:
                 printf("Four");
                 break;  
                 
        case 5:
                 printf("Five");
                 break;  
                 
        case 6:
                 printf("Six");
                 break; 
                 
        case 7:
                 printf("Seven");
                 break;
                 
        case 8:
                 printf("Eight");
                 break; 
                 
        case 9:
                 printf("Nine");
                 break;
                 
        default:
                 printf("Invalid Number");         
    }

    


}// End of Display

// Time complexity: o(N)


///////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////
//
//  Testcases Succesfully handaled by the application
//
//     Input1 : 9       Output : Nine
//     Input1 :-3       Output : Three 
//     Input1 :12       Output : Invalid Number
//
///////////////////////////////////////////////////////////////////////