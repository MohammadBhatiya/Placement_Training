import java.util.*;

public class day10_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int num = 3;
        // int inpnum = sc.nextInt();
        // int pwd = 12345;
        // int epwd = sc.nextInt();
        // if (pwd == epwd) {
        // System.out.println("Login");
        // } else {
        // System.out.println("Failed");
        // }

        // if (num == inpnum) {
        // System.out.println("Correct Number");
        // } else if (num < inpnum) {
        // System.out.println("Enter some small number");
        // } else {
        // System.out.println("Enter some large number");
        // }

        System.out.println("Enter the total number of floors in the building:");
        int totalFloors = sc.nextInt();

        System.out.println("Enter the current floor (1 to " + totalFloors + "):");
        int currentFloor = sc.nextInt();

        System.out.println("Enter the destination floor (1 to " + totalFloors + "):");
        int destinationFloor = sc.nextInt();

        System.out.println("Enter the number of floors to cross per second:");
        int floorsPerSecond = sc.nextInt();

        System.out.println("Enter '1' to press the stop button, or '0' to continue:");
        int stopButton = sc.nextInt();

        System.out.println("\nLift is moving...");

        if (stopButton == 1) {
            System.out.println("Lift stopped at floor " + currentFloor);
        } else {
            System.out.println("Lift crossed floor " + currentFloor);
            while (currentFloor != destinationFloor) {
                if (currentFloor < destinationFloor) {
                    currentFloor++;
                } else {
                    currentFloor--;
                }
                System.out.println("Lift crossed floor " + currentFloor);
                try {
                    Thread.sleep(1000 / floorsPerSecond); // Delay for simulation purposes
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("\nLift reached the destination floor: " + currentFloor);
        }

    }
}
