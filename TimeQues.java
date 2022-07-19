/*
  Java lab assignment:03
  Question:01
  Roll no:2020PGCACA03
*/
import java.io.*;
import java.util.*;
class Time
{
    int hour,min,sec;
   
    public Time(int h,int m,int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    public Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
   public void addTime(Time T1, Time T2) {
        hour = T1.hour + T2.hour;
        min = T1.min + T2.min;
        sec = T1.sec + T2.sec;
        if(sec>=60)
        {
            min=min+sec/60;
            sec=sec%60;
        }
        if(min>=60)
        {
            hour=hour+min/60;
            min=min%60;
        }
    
    }

    void subtractTime(Time T1, Time T2) {
        if (T2.sec > T1.sec) {
            --T1.min;
            T1.sec += 60;
        }
        sec = T1.sec - T2.sec;
        if (T2.min > T1.min) {
            --T1.hour;
            T1.min += 60;
        }
        min = T1.min - T2.min;
        hour = T1.hour - T2.hour;
    }
    public void toSecond()
    { 
        double tsec;
       tsec=sec+(min*60)+(hour*60*60);
       System.out.println(tsec);
    }
    public void toHours()
    {
        double thr;
        thr=hour+(min/60.0)+(sec/(60.0*60.0));
        System.out.println(thr);
    }
    
    public void displayTime()
    {
        System.out.println(hour+ ":"+min+":"+sec);
    }
    public void setTime(int hour, int min, int sec) {
        this.hour = hour;
        this.min = min;
        this.sec = sec;
    }
}
public class TimeQues{
    public static void main(String args[])throws IOException{
    int hour,min,sec,choice;
        Time T1 = new Time();
        Time T2 = new Time();
        Time T3 = new Time();
    Scanner sc= new Scanner(System.in); 
    System.out.println("Enter time in HH::MM::SS");
    System.out.println("Enter 1 to set time");
        System.out.println("Enter 2 to display time");
        System.out.println("Enter 3 to add time");
        System.out.println("Enter 4 to subtract time");
        System.out.println("Enter 5 to convert to seconds");
        System.out.println("Enter 6 to convert to hours");
        System.out.println("Enter 0 to exit");
        System.out.print("Enter choice:");
        choice = sc.nextInt();
        while (choice != 0) {
            switch (choice) {
                case 1:
                    System.out.println("Enter hour, minute and second of time1:");
                    hour = sc.nextInt();
                    min = sc.nextInt();
                    sec = sc.nextInt();
                    T1.setTime(hour, min, sec);
                    System.out.println("Enter hour, minute and second of time2:");
                    hour = sc.nextInt();
                    min = sc.nextInt();
                    sec = sc.nextInt();
                    T2.setTime(hour, min, sec);
                    break;
                case 2:
                    System.out.println("Time of T1 is:");
                    T1.displayTime();
                    System.out.println("Time of T2 is:");
                    T2.displayTime();
                    break;
                case 3:
                    System.out.println("T1 + T2=");
                    T3.addTime(T1, T2);
                    T3.displayTime();
                    break;
                case 4:
                    System.out.println("T1 - T2=");
                    T3.subtractTime(T1, T2);
                    T3.displayTime();
                    break;
                case 5:
                    System.out.println("T1 in seconds:");
                    T1.toSecond();
                    System.out.println("T2 in seconds:");
                    T2.toSecond();
                    break;
                case 6:
                    System.out.println("T1 in seconds:");
                    T1.toHours();
                    System.out.println("T2 in seconds:");
                    T2.toHours();
                    break;

             }
            System.out.print("Enter choice=");
            choice = sc.nextInt();
               
    
        }
    }

}


