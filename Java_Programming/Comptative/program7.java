//Write a program to print all even number upto N

class Logic
{
   void PrintEvenNumbers(int n)
   {
    int iCnt = 0;

    for(iCnt = 0;iCnt <= n;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            System.out.println(iCnt);
        }
    }
   }
}

class program7
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);
    }
}