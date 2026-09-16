#include<stdio.h>

typedef unsigned int UINT;

// POSITION 21 AND 27
int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",iNo);

    iResult = iMask ^ iNo;

    printf("Updated number : %x\n",iResult);
    
    return 0;
}