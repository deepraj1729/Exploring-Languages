package oops.interfaces;

public class GameRunner {

    public static void main(String[] args) {
        GamingConsole game = new MarioGame();
        game.up();
        game.down();
        game.left();
        game.right();

        System.out.println("");

        GamingConsole pieces = new ChessGame();
        pieces.up();
        pieces.down();
        pieces.left();
        pieces.right();

    }
    
}
