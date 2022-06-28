package oops.interfaces;

public class ChessGame implements GamingConsole{
    @Override
    public void up(){
        System.out.println("Move pieces up");
    }

    @Override
    public void down(){
        System.out.println("Move pieces down");
    }

    @Override
    public void left(){
        System.out.println("Move pieces left");
    }

    @Override
    public void right(){
        System.out.println("Move pieces right");
    }
}
