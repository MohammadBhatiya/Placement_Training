
class DC {
    // DC() {
    // System.out.println("Default Constructor");
    // }
    int a, b;

    DC(int a, int b) {
        this.a = a;
        this.b = b;
        System.out.println("Parameterise: " + (a + b));
    }

    DC(int a) {
        System.out.println("Copy Constructor");
    }
};

public class day16_constructor {
    public static void main(String[] args) {
        DC a = new DC(10, 20);
        DC b = new DC(5);
    }
}
