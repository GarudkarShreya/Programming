#include<stdio.h>

typedef unsigned int UINT;

// POSITION 4
int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter number : ");
    scanf("%d",&iNo);

    iMask = 0x00000008;

    iNo = iNo ^ iMask;

    printf("Updated mask is : %d\n",iNo);

    return 0;
}