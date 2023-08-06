import java.util.*;

public class hw_q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number:");
        int num = sc.nextInt();
        // while (num != 0) {
        // int rem = num % 10;
        // System.out.println(rem);
        // num = num / 10;
        // }

        String rem = Integer.toString(num);
        for (int i = 0; i < rem.length(); i++) {
            System.out.println(rem.charAt(i));
        }
    }
}
