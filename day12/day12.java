import java.util.*;

// class Arith {
//     private int v = 50;

//     void add(int a, int b) {
//         System.out.println("Sum: " + (a + b));
//     }

//     void subs(int a, int b) {
//         System.out.println("Substraction: " + (a - b));
//     }

//     // encapsulation
//     void set(int val) {
//         this.v = val;
//     }

//     int get(int a) {
//         return a;
//     }
// };

// // single level inheritance
// class A {
//     void a() {
//         System.out.println("class A");
//     }
// };

// class B extends A {
//     void b() {
//         System.out.println("class B");
//     }
// };

// // multi level inheritance
// class Animal {
//     protected String species;

//     public Animal(String species) {
//         this.species = species;
//     }

//     public void displaySpecies() {
//         System.out.println("Species: " + species);
//     }
// };

// class Mammal extends Animal {
//     private String habitat;

//     public Mammal(String species, String habitat) {
//         super(species);
//         this.habitat = habitat;
//     }

//     public void displayHabitat() {
//         System.out.println("Habitat: " + habitat);
//     }
// };

// class Dolphin extends Mammal {
//     private int swimSpeed;

//     public Dolphin(String species, String habitat, int swimSpeed) {
//         super(species, habitat);
//         this.swimSpeed = swimSpeed;
//     }

//     public void displaySwimSpeed() {
//         System.out.println("Swim Speed: " + swimSpeed + " km/h");
//     }
// };

// multiple inheritance
// interface A1 {
//     void a();
// };

// interface B1 {
//     void b();
// };

// class C1 implements A1, B1 {

//     public void a() {
//         int a = 10, b = 20;
//         System.out.println("Sum: " + (a + b));
//     }

//     public void b() {
//         int a = 20, b = 10;
//         System.out.println("Sub: " + (a - b));
//     }
// };

class Animal {

}

public class day12 {
    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // int x, y;
        // x = sc.nextInt();
        // y = sc.nextInt();

        // Arith o = new Arith();
        // o.add(x, y);
        // o.subs(y, x);

        // B b = new B();
        // b.a();
        // b.b();

        // Dolphin dolphin = new Dolphin("Bottlenose Dolphin", "Marine", 40);
        // dolphin.displaySpecies();
        // dolphin.displayHabitat();
        // dolphin.displaySwimSpeed();

        C1 o = new C1();
        System.out.println(o.hashCode());
        o.a();
        o.b();
    }
}
