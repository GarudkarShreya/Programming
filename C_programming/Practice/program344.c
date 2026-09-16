#include<stdio.h>

typedef unsigned int UINT;

// POSITION 9 AND 17W
int main()
{
    UINT iMask = 0x00010100;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",iNo);

    iResult = iMask ^ iNo;

    printf("Updated number : %x\n",i);
    
    return 0;
}