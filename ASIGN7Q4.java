class Fibonacci{
    void getFibonacci(int[] fibArray) {
        int a = 0;
        int b = 1;
        fibArray[0] = a;
        fibArray[1] = b;
        int c;
        for(int i=2;i<fibArray.length;i++) {
            c = a+b;
            fibArray[i] = c;
            a = b;
            b = c;
        }
    }
}

class FibonacciSync{
    void getFibonacciSync(int[] fibArray) {
        synchronized(this)
        {
        int a = 0;
        int b = 1;
        fibArray[0] = a;
        fibArray[1] = b;
        int c;
        for(int i=2;i<fibArray.length;i++) {
            c = a+b;
            fibArray[i] = c;
            a = b;
            b = c;
          } 
        }
    }
}



public class ASIGN7Q4 {

        public static void main(String[] args) throws Exception {
            int [] array_fib = new int[10];
            Fibonacci f = new Fibonacci();
            f.getFibonacci(array_fib);
            FibonacciSync f1 = new FibonacciSync();
            f1.getFibonacciSync(array_fib);
            Thread t1 = new Thread(()->
            {
                for(int i = 0; i < array_fib.length; i+=2)
                    System.out.println("Thread 1:" + array_fib[i]);
            });
            Thread t2 = new Thread(()->
            {
                for(int i = 1; i < array_fib.length; i+=2)
                    System.out.println("Thread 2:" + array_fib[i]);
            });
            t1.start();
            t2.start();
            t1.join();
            t2.join();
            System.out.println("Synchronised block series:");
            
            Thread t3 = new Thread(()->
{
    synchronized (array_fib){
        for(int i = 0; i < array_fib.length; i++)
            if(i % 2 == 0) {
                System.out.println("Thread 1:" + array_fib[i]);
                try {
                    array_fib.wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            else
                array_fib.notify();
    }
});
Thread t4= new Thread(()->
{
    synchronized (array_fib){
        for(int i = 0; i < array_fib.length; i++)
            if(i % 2 != 0) {
                System.out.println("Thread 2:" + array_fib[i]);
                try {
                    array_fib.wait();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            else
                array_fib.notify();
    }
});

t3.start();
    t4.start();
    t3.join();
    t4.join();
        }
    }
    