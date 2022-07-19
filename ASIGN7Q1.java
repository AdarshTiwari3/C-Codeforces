import java.util.Scanner;

class Sequence extends Thread {
    double n, k, exp;

    Sequence(double n, double k) {
        this.n = n;
        this.k = k;
    }

    @Override
    public void run() {
        exp = Math.pow(n, k);
    }

    public double getValue() {
        return exp;
    }
}

public class ASIGN7Q1 {
    public static void main(String[] args) throws InterruptedException {
        System.out.println("Enter the value of k");
        Scanner sc = new Scanner(System.in);
        double k = sc.nextDouble();
        double sum = 0;
        Sequence t1 = new Sequence(1, k);
        Sequence t2 = new Sequence(2, k);
        Sequence t3 = new Sequence(3, k);
        Sequence t4 = new Sequence(4, k);
        Sequence t5 = new Sequence(5, k);
        Sequence t6 = new Sequence(6, k);
        Sequence t7 = new Sequence(7, k);
        Sequence t8 = new Sequence(8, k);
        Sequence t9 = new Sequence(9, k);
        Sequence t10 = new Sequence(10, k);
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
        t6.start();
        t7.start();
        t8.start();
        t9.start();
        t10.start();
        t1.join();
        sum += t1.getValue();
        t2.join();
        sum += t2.getValue();
        t3.join();
        sum += t3.getValue();
        t4.join();
        sum += t4.getValue();
        t5.join();
        sum += t5.getValue();
        t6.join();
        sum += t6.getValue();
        t7.join();
        sum += t7.getValue();
        t8.join();
        sum += t8.getValue();
        t9.join();
        sum += t9.getValue();
        t10.join();
        sum += t10.getValue();
        System.out.println("The value of the sequence is " + sum);
    }
}