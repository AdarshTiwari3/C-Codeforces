/*
Java Lab -> Assignment:02
Roll No:2020PGCACA03
Q:02
*/
import java.lang.Math;
public class PointsCheckInCircle{
    public static void main(String args[])
    {
        //Enter the circle's point and radius as well as an other points that we want to check
        int c1=0,c2=0,a1=8,a2=6;
        int r=5;
        double dis=Math.sqrt(((c2-a2)*(c2-a2))+((c1-a1)*(c1-a1)));
        if(dis==r)
          System.out.println("point is on the circle");
        else if(dis<r)
          System.out.println("point is inside the circle");
        else if(dis>r)
          System.out.println("Point is outside the circle");
    }
}