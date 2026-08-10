//write  a program to check number is palindrome or not 

class Logic
{
    void CheckPalindrome(int num)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        iTemp = num;

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;
        }

        if(iRev == iTemp)
        {
            System.out.println("Number is palindrome : "+iRev);
        }
        else
        {
            System.out.println("Number is not palindrome : "+iRev);

        }
    }
}

class program2
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();

        obj.CheckPalindrome(121);
        
    }
}