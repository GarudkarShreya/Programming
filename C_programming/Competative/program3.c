//Program to print 5 to 1 numbers on screen
/*
ALGORITHM
  START
    Initialize number from 5
    Print numbers from 5 to 1
  STOP
*/
#include<stdio.h>

void Display()
{
    int i = 0;
    int j = 5;

    while(i <= 5)
    {
        printf("%d",i);
        i++;
    }

}

int main()
{
    Display();

    return 0;
}
