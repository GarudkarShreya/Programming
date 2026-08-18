#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{

private :

    int *Arr;
    int iSize;
  
public :
   
    // PARAMETERIZED CONSTRUCTOR WITH DEFAULT ARGUMENT
    ArrayX(int X = 5)     
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

       ArrayX * aobj1 = new ArrayX();      // PARAMETRIZED
       ArrayX * aobj2 = new ArrayX(15);     // PARAMETRIZED
        
       delete aobj1;
       delete aobj2;

    return 0;
}
