#include<stdio.h>

int main()
{
  int iNo = 0, iCount = 0, iDigit = 0;

  printf("Enter number : \n");
  scanf("%d",&iNo);

  while (iDigit != 0)
  {
     iDigit = iNo % 2;

     iCount++;

     iNo = iNo / 2;
     printf("Result is : %d\n",iCount);

  }


    return 0;
}