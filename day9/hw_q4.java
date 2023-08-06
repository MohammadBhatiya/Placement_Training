import java.util.Scanner;

public class hw_q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Source: ");
        String source = sc.next();
        System.out.println("Enter Destination: ");
        String dest = sc.next();
        System.out.println("Enter Number of Passengers: ");
        int passengerCount = sc.nextInt();
        System.out.println("Enter fare per passenger: ");
        int fare = sc.nextInt();
        int totalFare = passengerCount * fare;

        System.out.println("------------------------------------");
        System.out.println("|         GSRTC WELCOMES YOU!      |");
        System.out.println("|                                  |");
        // System.out.println("| BUS TICKET |");
        System.out.println("|                                  |");
        System.out.println("|----------------------------------|");
        System.out.println("| From: " + source + "                         |");
        System.out.println("| To:   " + dest + "                        |");
        System.out.println("|----------------------------------|");
        System.out.println("| Number of Passengers:     " + passengerCount + "      |");
        System.out.println("| Fare per Passenger:   Rs." + fare + "      |");
        System.out.println("| Number of Passengers fares:      |");
        System.out.println("| " + passengerCount + " X " + fare + " = Rs." + totalFare + "                   |");
        System.out.println("| Total Fare:         Rs." + totalFare + "        |");
        System.out.println("|----------------------------------|");
        System.out.println("|           Thank you!             |");
        System.out.println("|           Visit Again            |");
        System.out.println("------------------------------------");
    }
}
