//write  a program to find the maximum of two numbers

class Logic
{
    void FindMax(int a, int b)
    {

        int iMax = 0;

        if(a > b)
        {
            iMax = a;

        }
        else
        {
            iMax = b;
        }

        System.out.println("Maximum number is : " + iMax);

    }
}

class program3
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();

        obj.FindMax(20,15);
        
    }
}