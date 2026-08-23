/*
  iRow : 4 iCol : 4
   1 1 1 1
   2 2 2 2
   3 3 3 3 
   4 4 4 4
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol) throws IllegalArgumentException
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i+"\t");
            }

            System.out.println();
        }
    }
}
class program198
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 =0, iValue2 = 0;

        System.out.println("Enter no. of rows : ");
        sobj.nextInt(iValue1);

        System.out.println("Enter no. of coloumns : ");
        sobj.nextInt(iValue2);

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
        
    }
}