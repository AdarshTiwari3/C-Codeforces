/*
Java lab assignment:04
Q:3
roll no:2020pgcaca03
*/

import java.util.Scanner;

public class substringOPR {

    static void Insert() {
        Scanner var = new Scanner(System.in);
        
        System.out.print("Enter the string : ");
        String s = var.nextLine();
        
        System.out.print("Enter the string which is to be inserted : ");
        String nstr = var.nextLine();
        
        System.out.print("Enter the position to insert string : ");
        int pos = var.nextInt();
        StringBuffer newString = new StringBuffer(s);
        newString.insert(pos + 1, nstr);
        System.out.println(" After Inserting : "+newString.toString());
    }
    
    static void Delete() {
        Scanner var = new Scanner(System.in);
        System.out.print("Enter the string : ");
        String s1 = var.nextLine();
        StringBuffer sb = new StringBuffer(s1);  
        System.out.println("string Is : " + sb);
        System.out.print("Enter the First Index to Delete string : ");
        int firstIndex=var.nextInt();
        System.out.print("Enter the Second Index to Delete string : ");
        int secondIndex=var.nextInt();
        sb = sb.delete(firstIndex,secondIndex);  
        System.out.println("After deleting : " + sb);  
        
    }
    
    static void Replce() {
        Scanner var = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String str = var.nextLine();
        System.out.print("Enter the substring: ");
        String substr = var.nextLine();
        System.out.print("Enter the Replace string: ");
        String repstr = var.nextLine();
        System.out.println(str.replace(substr, repstr));
    }
    
    public static void main(String[] args) {
        
        Insert();
        

        
        Delete();
        

        
        Replce();
    }
    
}