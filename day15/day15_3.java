class SystemA {

    synchronized void display(String str) {

        {
            for (int i = 0; i < str.length(); i++)
                System.out.print(str.charAt(i) + "");
        }
        System.out.println();
    }
}

class B extends Thread {
    SystemA s1;

    public B(SystemA s1) {
        this.s1 = s1;
    }

    public void run() {
        s1.display("Hello world, how are you?");
    }
}

class C extends Thread {
    SystemA s1;

    public C(SystemA s1) {
        this.s1 = s1;
    }

    public void run() {
        s1.display("Hello world, how are you?");
    }
}

public class day15_3 {
    public static void main(String[] args) {
        SystemA o = new SystemA();
        B b = new B(o);
        C c = new C(o);
        b.start();
        c.start();
    }
}
