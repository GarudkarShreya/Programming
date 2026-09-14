#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFFFFF;           // LARGEST VALUE OF INT

    printf("%u\t%X\n",iMask,iMask);

    return 0;
}