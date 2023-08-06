import java.util.*;

public class day10_lift {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the total number of floors in the building:");
        int totalFloors = sc.nextInt();

        System.out.println("Enter the current floor (1 to " + totalFloors + "):");
        int currentFloor = sc.nextInt();

        System.out.println("Enter the destination floor (1 to " + totalFloors + "):");
        int destinationFloor = sc.nextInt();

        int floorsPerSecond = destinationFloor;

        System.out.println("Enter '1' to press the stop button, or '0' to continue:");
        int stopButton = sc.nextInt();

        if (stopButton == 1) {
            System.out.println("Lift stopped at floor " + currentFloor);
            System.out.println("Enter your correct Destination floor:");
            destinationFloor = sc.nextInt();

            System.out.println("\nLift is moving...");
            System.out.println("Lift crossed floor " + currentFloor);
            while (currentFloor != destinationFloor) {
                if (currentFloor < destinationFloor) {
                    currentFloor++;
                } else {
                    currentFloor--;
                }
                System.out.println("Lift crossed floor " + currentFloor);
                try {
                    Thread.sleep(1000 / floorsPerSecond);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("\nLift reached the destination floor: " + currentFloor);

        } else if (stopButton >= 1) {
            System.out.println("Enter the input correctly");
            System.out.println("Enter '1' to press the stop button, or '0' to continue:");
            stopButton = sc.nextInt();

            if (stopButton == 1) {
                System.out.println("Lift stopped at floor " + currentFloor);
                System.out.println("Enter your correct Destination floor:");
                destinationFloor = sc.nextInt();

                System.out.println("\nLift is moving...");
                System.out.println("Lift crossed floor " + currentFloor);
                while (currentFloor != destinationFloor) {
                    if (currentFloor < destinationFloor) {
                        currentFloor++;
                    } else {
                        currentFloor--;
                    }
                    System.out.println("Lift crossed floor " + currentFloor);
                    try {
                        Thread.sleep(1000 / floorsPerSecond);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                System.out.println("\nLift reached the destination floor: " + currentFloor);

            }

        }

        else {
            System.out.println("\nLift is moving...");
            System.out.println("Lift crossed floor " + currentFloor);
            while (currentFloor != destinationFloor) {
                if (currentFloor < destinationFloor) {
                    currentFloor++;
                } else {
                    currentFloor--;
                }
                System.out.println("Lift crossed floor " + currentFloor);
                try {
                    Thread.sleep(1000 / floorsPerSecond);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            System.out.println("\nLift reached the destination floor: " + currentFloor);
        }
    }
}
