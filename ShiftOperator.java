/*
Java Lab -> Assignment:01
Roll No:2020PGCACA03
Q:01
*/

public class ShiftOperator{
    public static void main(String args[]) {
        int x=4; //00000100 after left shift by 11 bits(highest bit) 10000000000000=8192
        int y=4096;//1000000000000 after right shift by 9 bits 0000000001000=8
        System.out.println("Multiplication:");
        System.out.println("2048 * " + x + " = " + (x << 11));
        System.out.println("Division:");
        System.out.println("(1 / 512) * " + y + " = " + (y >> 9));
    }
}