class Inventory
{int pro[] = new int[5] ;
    void stock(int m,int n)
    {
        synchronized(this)
        {
             for(int i=0;i<n;i++)
             pro[m-1]++;
             
        }
        System.out.println("product "+ m +" stock:"+pro[m-1]);
    }
}

 class Mythread extends Thread 
{
    Inventory i;
    Mythread(Inventory i)
    {
        this.i=i;
    }
    public void run()
    {
        i.stock(1,4);
    }
}
class Mythread1 extends Thread
{
    Inventory i;
    Mythread1(Inventory i)
    {
        this.i=i;
    }
    public void run()
    {
        i.stock(2,5);
    }
}

public class ASIGN7Q3{
    public static void main(String[] args)
    {
        Inventory ob = new Inventory();
        Mythread  t1 = new Mythread(ob);
        
        Mythread1 t2 = new Mythread1(ob);
        t1.start();
        t2.start();
    }
}
    