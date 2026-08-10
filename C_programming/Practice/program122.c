#include<stdio.h>
#include<stdlib.h>


int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt]; 
    }
    return iSum;
    
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    int iRet = 0;


    // Step1 : Accept number of elments
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //Step2 : Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step3 : Accept value from user 

    printf("Enter the elemnts : ");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {

        scanf("%d",&Brr[iCnt]);

    }

    //Step4 : Use the memory  (logic)

    iRet = Summation(Brr,iLength);
    printf("Summation is : %d\n",iRet);

    //Step5 : deallocate memory

    free(Brr);

    return 0;
}