//Write a program to check number is prime or not

class Logic
{
    void CheckPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (num/2); iCnt++)
        {
            if((num % iCnt) == 0)
            {
                break;
            }
        }
        if(iCnt >= (num/2) + 1)
        {
            System.out.println("Number is prime");
        }
        else
        {
            System.out.println("Number is not prime");; 
        }
    }
}

class program6
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}