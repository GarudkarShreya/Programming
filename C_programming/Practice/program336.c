#include<stdio.h>

typedef unsigned int UINT;

// POSITION 4TH 
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0XFFFFFFF7;
    UINT iResult = 0;

    if (iPos < 1 || iPos > 32)
    {
        printf("Invalid bit position");
    }
    
    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;

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

    iRet = OffBit(iValue,iLocation);

    printf("Updated number is : %d\n",iRet);

    return 0;
}