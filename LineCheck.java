/*
Java Lab -> Assignment:02
Roll No:2020PGCACA03
Q:01
*/

public class LineCheck{
    public static void main(String args[])
    {
        int x1=1,x2=2,y1=3,y2=4;//points of line A
        int a1=2,a2=4,b1=6,b2=8;//points of line B
        int m1=(y2-y1)/(x2-x1); //slope of A
        int m2=(b2-b1)/(a2-a1); //slpe of B
        if(m1==m2)
        {
            System.out.println("Lines are parallel");
        }
        else 
        System.out.println("Lines are intersecting to each other");
    }
}