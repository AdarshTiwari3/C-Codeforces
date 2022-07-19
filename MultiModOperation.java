/*
Java Lab -> Assignment:01
Roll No:2020PGCACA03
Q:02
*/

public class MultiModOperation{
    public static void main(String args[])
    {
        int n=4;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print((i*j)%n + " "); // for printing the values of i*j%n
            }
            System.out.println("");//for new line
        }
    }

}