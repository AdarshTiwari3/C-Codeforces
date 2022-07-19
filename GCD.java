/*
Java Lab -> Assignment:02
Roll No:2020PGCACA03
Q:03->using recursive method & non recursive method
*/
public class GCD {

    public static int HCF(int a, int b)
    {
        if (b != 0)
            return HCF(b, a % b);
        else
            return a;
    }
    static int hcf2(int a, int b)
    {
        if (a == 0)
            return b;
        else if (b == 0)
            return a;
        while (a != b) 
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        return a;
    }
    public static void main(String[] args) {
        
        int a =12, b =5;
        int hcf = HCF(a,b);

        System.out.printf("G.C.D of %d and %d =%d.", a, b, hcf);
         a =12; b =5;
         System.out.println();
         hcf = hcf2(a,b);

        System.out.printf("G.C.D of %d and %d =%d.", a, b, hcf);
    }

   
}