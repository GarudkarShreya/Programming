

class Logic
{
    void FindMin(int a, int b, int c)
    {

        int iMin = 0;

        if(a < b && a < c)
        {
            iMin = a;

        }
        else if(b < c)
        {
            iMin = b;
        }
        else
        {
            iMin = c;
        }

        System.out.println("Minimum number is : " + iMin);

    }
}


class program4
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();

        obj.FindMin(3,7,2);
        
    }
}