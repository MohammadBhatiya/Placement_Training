// class A
//         extends Thread {

//     public void run() {
//         for (int i = 1; i <= 10; i++) {
//             System.out.println("Thread is running " + i);
//         }
//     }

// overriding
// public void run() {
// for (int i = 1; i <= 10; i++) {
// System.out.println("Thread is running " + i);
// }
// }
// };

// class B extends A {
//     public void run() {
//         for (int i = 1; i <= 10; i++) {
//             System.out.println("Thread B " + i);
//         }
//     }
// };

class A extends Thread {
    public void run() {
        // int a = 10, b = 20;
        // System.out.println("Thread is running A " + (a + b));
        for (int i = 1; i <= 10; i++) {
            System.out.println("Thread is running A " + i);
        }
    }
};

class B extends Thread {
    public void run() {
        // int x = 10, y = 20;
        // System.out.println("Thread is running B " + (y - x));
        for (int i = 1; i <= 10; i++) {
            System.out.println("Thread is running B " + i);
        }
    }
};

class day15 {
    public static void main(String[] args) {
        // A o = new A();
        // o.start();

        // o.run();

        // B o = new B();
        // o.start();

        A o1 = new A();
        B o2 = new B();
        o1.start();
        o2.start();
    }
}