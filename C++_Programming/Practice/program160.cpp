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
        cout<<"Inside constructor"<<endl;
        iSize = X;                 // CHARACTERISTIC INITALIZATION
        Arr = new int(iSize);      //RESOURCE ALLOCATION
    }
    
    // DESTRSTOR
   ~ArrayX()
   {

    cout<<"Inside destructor"<<endl;
    delete[]Arr;                   //RESOURCE DEALLOCATION 
   }

};

int main()
{

    //static memory allocation for obj
    //ArrayX aobj(5);

       ArrayX * aobj = new ArrayX(5);

       delete aobj;

       cout<<"End of main";
    
    return 0;
}
