/*
java lab assignment:04
Q:1
roll:2020PGCACA03
*/

import java.util.Scanner;

public class separateString

{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the strings : ");
        String str = sc.nextLine();
        String[] arrOfStr = str.split("_");
        for (String a : arrOfStr)
            System.out.println(a);
    }
}