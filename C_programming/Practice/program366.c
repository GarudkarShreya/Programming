#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;  
};

typedef struct node NODE;
typedef struct node * PNODE;

void Display(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
       printf("%d\n",First->data);
       First = First -> next;  
    }  

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    NODE obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    Display(head);       // COUNT(100)
    
    printf("Number of node is : %d\n",iRet);

    return 0;
}