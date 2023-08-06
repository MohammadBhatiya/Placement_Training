// class A {
//     void add(int a, int b) {
//         System.out.println(a + b);
//     }

//     void add(int a, int b, int c) {
//         System.out.println(a + b + c);
//     }
// };

// class B {
//     void add(int a, int b) {
//         System.out.println(a + b);
//     }
// };

// class C extends B {
//     void add(int a, int b) {
//         System.out.println(a + b);
//     }
// };

abstract class A {
    abstract int sum();

    abstract int sub();
};

class B extends A {
    public int sum() {
        System.out.println(10 + 20);
        return 0;
    }

    public int sub() {
        System.out.println(10 - 20);
        return 0;
    }
};

class poly {
    public static void main(String[] args) {
        // A o = new A();
        // o.add(10, 20);
        // o.add(10, 20, 30);

        // C c1 = new C();
        // c1.add(10, 20);

        B o = new B();
        o.sum();
        o.sub();

    }
}