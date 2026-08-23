import java.util.*;

class program187                        
{

static void Display(int iNo) 
{
    int iCnt = 0;
    char ch = '\0';
    char CH = '\0';

    for(iCnt = 1, ch = 'a', CH = 'A'; iCnt <= iNo; iCnt++, ch++, CH++)
    {
        
      if(iCnt % 2 == 0)
      {
        System.out.print(ch+"\t");
    
      }
      else
      {
        System.out.print(CH+"\t");

      }

    }

    System.out.println();

}
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the no. of elements : ");

        iValue = sobj.nextInt();
        Display(iValue);
    }
}