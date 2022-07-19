/*
Java lab assignment:04
Q:2
roll no:2020pgcaca03
*/

import java.util.Scanner;

public class matchsubString {

    static void subString(String str1,String str2,int k) {
        for(int i=0;i<str1.length();++i) {
            for(int j=0;j<str2.length();++j) {
                char ch1=str1.charAt(i);
                char ch2=str2.charAt(j);
                if(ch1==ch2) {
                    int t1=i+1;
                    int t2=j+1;
                    int c=0;
                    while(ch1==ch2 && t1<str1.length() && t2<str2.length()) {
                        ch1=str1.charAt(t1);
                        ch2=str2.charAt(t2);
                        t1++;
                        t++;
                        c++;
                        if(c==k) {
                            System.out.println("True"+i+" "+j);
                            return;
                        }
                    }
                }
            }
        }
        System.out.println("False");
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter First : ");
        String str1=sc.nextLine();
        System.out.print("Enter Second : ");
        String str2=sc.nextLine();
        System.out.print("Enter length : ");
        int k=sc.nextInt();
        subString(str1,str2,k);
    }    
}