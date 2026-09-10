#include<stdio.h>

typedef unsigned int UINT;

int main()
{
  UINT iNo = 0; 
  UINT iMask = 64;
  UINT iAns = 0;

  printf("Enter number : \n");
  scanf("%d",&iNo);

  iAns = iNo & iMask;

  if (iAns == iMask)
  {
    printf("Sevnth bit is on");
  }
  else
  {
    printf("Seventh bit is off");
  }

  return 0;
}