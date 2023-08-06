import java.util.*;

public class hw_q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a Floating point number:");
        double num = sc.nextDouble();

        double posInt = Math.ceil(num);
        double negInt = Math.floor(num);

        System.out.println("Adjacent Positive Number: " + posInt);
        System.out.println("Adjacent Negative Number: " + negInt);

    }
}
