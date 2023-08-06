// user defined exception
package day16;

public class day16_1 {
    public static void acc(int x) throws Exception {
        int ba = 15000;
        int c = ba + x;
        System.out.println("The Before Balance is:", +ba);
        System.out.println("The Credited Amount is:", +x);
        System.out.println("Final Balance is:", +c);
        if (c > 20000) {
            throw new Exception("Your bank limit is Exceeded");
        } else {
            System.out.println("Your Balance is:", +c);
        }
    }

    public static void main(String[] args) throws Exception {
        acc(10000);
    }
}
