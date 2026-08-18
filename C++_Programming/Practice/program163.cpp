#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{

public :

    int *Arr;
    int iSize;
  
    ArrayX(int X)     
    {

        iSize = X;                 
        Arr = new int(iSize);     
    }
    
   ~ArrayX()
   {
   
    delete[]Arr;                 
   }

};

int main()
{

       ArrayX * aobj = new ArrayX(5);

       //LOGIC (FUN CALL)
       cout<<aobj->iSize; 

       aobj->iSize = 0;     //ISSUE
       aobj->iSize = Arr;   //ISSUE

       delete aobj;

    return 0;
}
