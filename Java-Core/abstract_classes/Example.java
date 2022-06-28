package abstract_classes;

// Abstract class
abstract class Animal {
    public abstract void animalSound();

    public void sleep() {
      System.out.println("Now sleep time, Zzz");
    }
  }
  
  
class Pig extends Animal {
    public void animalSound() {
        System.out.println("The pig says: wee wee");
    }
}

public class Example {
    public static void main(String[] args) {
        Pig myPig = new Pig();
        myPig.animalSound();
        myPig.sleep();
      }
}
