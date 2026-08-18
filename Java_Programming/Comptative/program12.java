//write a program to display grade of student based on their marks

class Logic
{
    
   void DisplayGrade(int marks)
  {
    
        if((marks >= 80) && (marks <= 100))
        {
            System.out.println("Grade A");
        }
        else if((marks >= 50) && (marks < 80))
        {
            System.out.println("Grade B");
        }
        else if((marks >= 0) && (marks < 50))
        {
            System.out.println("Grade C");
        }
        else
        {
            System.out.println("Invalid Marks");
        }
  }
    
  }

class program12
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayGrade(82);
    }
}