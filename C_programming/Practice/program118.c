#include<stdio.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
        iSum = iSum + iCnt;

    } 
    return iSum;
}

int main()
{

    int iLength = 4;
    int iCnt = 0;

   int Brr[iLength];   // error

   printf("Enter the elements : ");

   for ( iCnt = 0; iCnt < iLength; iCnt++)
   {
    
       scanf("%d\n",&iCnt);

   }
   
    Summation(Brr,iLength);

   return 0;

}