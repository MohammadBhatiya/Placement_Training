class SystemA {
    synchronized void display() {
        System.out.println("System");
    }
};

class B extends Thread {
    SystemA s1;

    public B(SystemA s1) {
        this.s1 = s1;
    }

    public void run() {
        for (int i = 0; i <= 10; i++) {
            System.out.println("Class B Thread A: " + i);
        }
    }
};

class C extends Thread {
    SystemA s1;

    public C(SystemA s1) {
        this.s1 = s1;
    }

    public void run() {
        for (int i = 0; i <= 10; i++) {
            System.out.println("Class C Thread B: " + i);
        }
    }
};

class day15_2 {
    public static void main(String[] args) {
        SystemA o1 = new SystemA();
        B o2 = new B(o1);
        C o3 = new C(o1);
        o2.start();
        o3.start();

    }
}