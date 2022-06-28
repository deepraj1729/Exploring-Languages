package oops.interfaces;

public class MarioGame implements GamingConsole {
    @Override
    public void up(){
        System.out.println("Jump");
    }

    @Override
    public void down(){
        System.out.println("Roll down");
    }

    @Override
    public void left(){
        System.out.println("Go left");
    }

    @Override
    public void right(){
        System.out.println("Go right");
    }
}
