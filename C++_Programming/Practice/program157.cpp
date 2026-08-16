#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{
public :

    int *Arr;
    int iSize;
    
    ArrayX()          //DEFAULT CONSTRUCTOR
    {
        
    }


    ArrayX(int X)      //PARAMETERIZED CONSTRUCTOR
    {

    }

   
};

int main()
{

    ArrayX aobj1;       //DEFAULT
    ArrayX aobj2(5);    //PARAMETRIZED      

    cout<<sizeof(aobj1)<<endl;   
    
    return 0;
}
