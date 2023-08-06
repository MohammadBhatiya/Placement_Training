import java.util.*;

public class queues {
    public static void main(String[] args) {
        ArrayDeque<Integer> o = new ArrayDeque<Integer>();
        o.offer(10);
        o.offer(20);
        o.offer(30);
        o.remove();

        System.out.println(o);
    }
}
