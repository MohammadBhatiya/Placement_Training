import java.util.*;

public class linkedlists {
    public static void main(String[] args) {
        LinkedList<Integer> o = new LinkedList<Integer>();

        o.add(10);
        o.add(20);
        o.add(30);
        o.add(1, 40);
        System.out.println(o);

        LinkedList<Integer> o1 = new LinkedList<Integer>();
        o1.add(60);
        o1.add(70);
        o1.add(80);
        o1.add(90);
        o1.addLast(100);

        o1.remove();
        o1.poll();
        System.out.println(o1);

        o.addAll(o1);

        System.out.println(o);
        o1.clear();
        System.out.println(o1);

    }
}
