/*
START
 Accept number as No
 If No is completely divisibale by 2 print even 
 otherwise print odd
STOP

STRART
  Accept number as No
  Divide No by 2
  If reminder is 0 
     then 
       print as even 
     otherwise 
       print as odd
STOP
*/
#include<stdio.h>

int main()
{
    int iValue = 0;
    int iReminder = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iReminder = iValue % 2;

    if(iReminder == 0)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }


    return 0;
}