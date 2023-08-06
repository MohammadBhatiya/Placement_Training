
class A {
    int x, y;

    public void th(int x, int y) {
        this.x = x;
        this.y = y;
        System.out.println(this.x + " " + this.y);
    }
}

public class day16_this {
    public static void main(String[] args) {
        int a = 10, b = 20;
        A o = new A();
        o.th(a, b);
        System.out.println(o instanceof A);
    }

}
