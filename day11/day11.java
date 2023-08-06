import java.util.*;

public class day11 {
    public static void main(String[] args) {
        int a[][] = { { 10, 20, 60 }, { 30, 40, 50 }, { 70, 80, 90 } };
        System.out.println(a.length);
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }

        for (int i = 0; i < a.length; i++) {
            for (int j = i; j < a[i].length; j++) {
                if (i == j) {
                    continue;
                }
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        System.out.println("Transpose:");
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }

    }
}
