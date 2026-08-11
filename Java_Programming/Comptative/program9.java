//Write a program to find sum of even and odd digits seperatly

class Logic
{
   void SumEvenOddDigits(int num)
  {
        int iDigit = 0, iEvenSum = 0, iOddSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits : " + iEvenSum);
        System.out.println("Sum of Odd Digits  : " + iOddSum);
    }
  }


class program9
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}