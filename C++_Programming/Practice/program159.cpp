#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{
public :

    int *Arr;
    int iSize;
  
    ArrayX(int X)      //PARAMETERIZED CONSTRUCTOR
    {
        cout<<"Inside constructor";
        iSize = X;                 // CHARACTERISTIC INITALIZATION
        Arr = new int(iSize);      //RESOURCE ALLOCATION
    }
    
    // DESTRSTOR
   ~ArrayX()
   {

    cout<<"Inside destructor";
    delete[]Arr;                   //RESOURCE DEALLOCATION 
   }

};

int main()
{

    //static memory allocation for obj
    //ArrayX aobj(5);

       ArrayX * aobj = new ArrayX(5);
    
    return 0;
}
