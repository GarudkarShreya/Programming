/*
  iRow : 4 iCol : 4
     
     $ @ @ @
     @ $ @ @
     @ @ $ @
     @ @ @ $

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol) 
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            //Filter for diagonal pattern 
            if(iRow != iCol)
            {
                System.out.println("Invalid parameters");
                System.out.println("Number of rows and coloumn should be same");
                return;
            }

                for(j = 1; j <= iCol; j++)
            {
              if(i == j)  // DIAGONAL
                {
                    System.out.print("$\t");
                } 
                else
                {
                    System.out.print("@\t");
                }
            }
           
            System.out.println();
        }
    }
}
class program211
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 =0, iValue2 = 0;

        System.out.println("Enter no. of rows : ");
        iValue1 =sobj.nextInt();

        System.out.println("Enter no. of coloumns : ");
        iValue2 =sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
        
    }
}