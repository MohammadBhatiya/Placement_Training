import java.util.*;

public class hw_q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number to see respective time hh:mm:ss ");
        int time = sc.nextInt();

        if (time < 10) {
            System.out.println("0" + time);
        }

        int hour = time / 3600;
        int minute = (time % 3600) / 60;
        int second = (time % 3600) % 60;

        System.out.println("Duration (hh:mm:ss): " + hour + ":" + minute + ":" + second);
    }
}
