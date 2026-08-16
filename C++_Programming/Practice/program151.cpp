#include<iostream>

using namespace std;

class ArrayX
{

    //Access spcifier of summation is private 
   int Summation(int Arr[], int iSize)
   {

    int iCnt = 0,isum = 0;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        isum = isum + Arr[iCnt];
    }

    return isum;

   }

};

int main()
{

    int *Brr = NULL;
    int iLength = 0,iCnt = 0, iRet = 0;
    ArrayX aobj;

    cout<<"Enter the no. of elements :\n";
    cin>>iLength;

    Brr = new int(iLength);
    cout<<"Enter the elements :\n";

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }
    
    cout<<"Elements of the array are : \n";

     for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }


    iRet = aobj.Summation(Brr, iLength);

    cout<<"Summation is :" <<iRet<<endl;
    
    delete []Brr;

    return 0;
}
