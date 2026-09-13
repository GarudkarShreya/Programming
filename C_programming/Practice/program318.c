#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0x1;
    int iCnt = 1;

    printf("%d\n",iMask);   //1

    iMask = iMask << 1;

    printf("%d\n",iMask);   //2

    iMask = iMask << 1; 
 
    printf("%d\n",iMask);

    iMask = iMask << 1;  

    printf("%d\n",iMask);

    iMask = iMask << 1;  

    printf("%d\n",iMask);

    iMask = iMask << 1; 

    printf("%d\n",iMask);

    iMask = iMask << 1; 

    printf("%d\n",iMask);

    iMask = iMask << 1;

    printf("%d\n",iMask);

    iMask = iMask << 1;

    printf("%d\n",iMask);

    iMask = iMask << 1;

    printf("%d\n",iMask);

    iMask = iMask << 1;
    return 0;
}