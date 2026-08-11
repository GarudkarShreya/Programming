//Write a program to print all odd number upto N

class Logic
{
   void PrintOddNumbers(int n)
   {
    int iCnt = 0;

    for(iCnt = 0;iCnt <= n;iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            System.out.println(iCnt);
        }
    }
   }
}

class program8
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20);
    }
}