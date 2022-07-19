/*
  Java lab assignment:03
  Question:02
  Roll no:2020PGCACA03
*/
import java.io.*;
import java.util.*;
import java.util.Scanner;
class Battery
{
        double energy;

        Battery() {
            energy = 100;
        }

        public void showLevel() {
            System.out.println("Your battery is " + energy);
        }

        public void sendMsg() {
            System.out.println("Message sent");
            energy -= 2.0;
        }

        public void recvMsg() {
            System.out.println("Message received");
            energy -= 1.0;
        }

        public void compute() {
            System.out.println("Successfully computed");
            energy -= 1.5;
        }

        public void recharge(int minutes) {
            energy += minutes / 2.0;
            if (energy >= 100)
                energy = 100;
            System.out.println("Battery recharged");
        }
    }
public class BatteryQues{
    public static void main(String[] args){
        int minutes, choice;
        Battery b = new Battery();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 to show battery level");
        System.out.println("Enter 2 to send message");
        System.out.println("Enter 3 to receive message");
        System.out.println("Enter 4 to compute");
        System.out.println("Enter 5 to recharge");
        System.out.println("Enter 0 to exit");
        choice = sc.nextInt();
        while (choice != 0) {
            switch (choice) {
                case 1:
                    b.showLevel();
                    break;
                case 2:
                    b.sendMsg();
                    break;
                case 3:
                    b.recvMsg();
                    break;
                case 4:
                    b.compute();
                    break;
                case 5:
                    minutes = sc.nextInt();
                    System.out.println("How many minutes do you want to charge?");
                    b.recharge(minutes);
                    break;
            }
            choice = sc.nextInt();
        }
    }
}
