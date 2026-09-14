#include<stdio.h>

typedef unsigned int UINT;

UINT ToggelBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0, iLocation = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter the bit position : ");
    scanf("%d",&iLocation);

    iRet = ToggelBit(iValue,iLocation);

    printf("Updated number is : %d\n",iRet);

    return 0;
}