import java.util.*;

class Main()
{
    
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
      int []hsh=new int[1000007];
      int n;
       n=sc.nextInt();
    for (int i = 0; i < n; i++)
    {
         int a;
         a=sc.nextInt();
        
        hsh[a]++;
    }
    for(int i=0;i<1000007;i++)
    {
        if(hsh[i]==1)
        System.out.println(i);
    }
    }
    
}