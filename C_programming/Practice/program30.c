#include<stdio.h>

void Display(int iNo)
{
    //Input filter

    if(iNo < 0)
    {
       printf("Invalid input\n");
       return;
    }
    
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("Jay ganesh\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}