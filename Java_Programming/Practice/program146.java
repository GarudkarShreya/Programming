import java.util.*;
import javax.swing.text.rtf.RTFEditorKit;

class program146

class ArrayX()

{
    public static  void Update(int Arr[])
    {
        int iCnt = 0;
        int iNo = 0;

        for(iCnt = 0; iCnt< Arr.length; iCnt++)
    {
         Arr[iCnt]++; 
        
    }
   
}

}
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        System.out.println("Enter the no. of elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the elements : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
           System.out.println(Brr[iCnt]);
        }

       ArrayX(Brr);

    System.out.println("Array elements after calling :\n "+iRet);

    for ( iCnt = 0; iCnt < 5; iCnt++)
    {
        System.out.println(Brr[iCnt]);
    }


        Brr = null;
        System.gc();
        
    }
