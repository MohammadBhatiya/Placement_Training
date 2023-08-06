// implementing runnable interface
class A implements Runnable {
    public void run() {

        System.out.println("Thread is running A ");

    }
};

class B implements Runnable {
    public void run() {

        System.out.println("Thread is running B ");

    }
};

class C implements Runnable {
    public void run() {

        System.out.println("Thread is running C ");

    }
}

public class day15_1 {
    public static void main(String[] args) {
        A o1 = new A();
        B o2 = new B();
        C o3 = new C();
        Thread t1 = new Thread(o1);
        Thread t2 = new Thread(o2);
        Thread t3 = new Thread(o3);

        t1.setPriority(10);
        t2.setPriority(6);
        t3.setPriority(3);

        t1.start();
        t2.start();
        t3.start();

    }
}
