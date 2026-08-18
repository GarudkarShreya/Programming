#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{

private :

    int *Arr;
    int iSize;
  
public :

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
       cout<<aobj->iSize;    //ERROR

       aobj->iSize = 0;     //ERROR
       aobj->iSize = Arr;   //ERROR

       delete aobj;

    return 0;
}
