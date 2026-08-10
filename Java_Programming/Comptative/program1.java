//Write a program to find the sum of digits

class Logic
{
    void SumDigits(int num)
    {

        int iDigit = 0;
        int iSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            iSum = iSum + iDigit;

            num = num / 10;
        }

        System.out.println("Sum of digits is : "+iSum);
    }
}

class program1
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.SumDigits(1234);
        
    }
}