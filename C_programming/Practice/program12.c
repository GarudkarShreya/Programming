#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iReminder = 0;
  
    iReminder = iNo % 2;

    if(iReminder == 0)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);

    return 0;
}