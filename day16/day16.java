import java.util.*;

public class day16 {
    public static void main(String[] args) {
        try {
            // int[] a = { 50, 60, 30 };
            // System.out.println(a[5]);
            int a = 10, b = 0;
            System.out.println(a / b);
        } catch (Exception e) {
            System.out.println("Exception catched: " + e); // e.getMessage();
        } finally {
            System.out.println("Exeception Mechanism is completed");
        }
    }
}
