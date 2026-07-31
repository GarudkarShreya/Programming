#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iReminder = 0;
  
    iReminder = iNo % 2;

    return iReminder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number to check it is Even or Odd : ");
    scanf("%d",&iValue);
    
    iRet = CheckEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("%d is even\n",iValue);
    }
    else
    {
        printf("%d is odd\n",iValue);
    }

    return 0;
}