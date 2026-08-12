//Accept one number and check whether is divisible by 5 or not 
/*
ALGORITHM
START
  Accept a number
  Check whether number is divisible by 5
  If yes, print "Divisible by 5"
  Otherwise print "Not Divisible by 5"
STOP
*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 int Check(int iNo)
 {
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
 }

 int main()
 {
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
 }
