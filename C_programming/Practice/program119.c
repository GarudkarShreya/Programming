#include<stdio.h>
//error due to stdlih
int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    // Step1 : Accept number of elments
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //Step2 : Allocate the memory
    Brr = (int *)malloc(iLength * sizeof(int));

    //Step3 : Accept value from user 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {

        scanf("%d",&Brr[iCnt]);

    }

    //Step4 : Use the memory  (logic)

    //Step5 : deallocate memory

    free(Brr);

    return 0;
}