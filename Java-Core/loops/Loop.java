package loops;

public class Loop{

    private int multiply(int a,int b){
        return a*b;
    }

    //For Loop
    public void forLoop(int num){
        for(int i=1;i<=10;i++){
            System.out.printf("%d x %d = %d",num,i,multiply(num,i)).println();
        }
        System.out.println("");
    }


    //While Loop
    public void whileLoop(int num){
        int i=1;

        while(i<=10){
            System.out.printf("%d x %d = %d",num,i,multiply(num,i)).println();
            i++;
        }
        System.out.println("");
    }


    //Do-While Loop
    public void doWhileLoop(int num){
        int i=1;
        do {
            System.out.printf("%d x %d = %d",num,i,multiply(num,i)).println();
            i++;
        } while (i<=10);
        System.out.println("");
    }

    
    //Main
    public static void main(String[] args) {
        Loop java = new Loop();
        java.forLoop(9);
        java.whileLoop(8);
        java.doWhileLoop(7);
    }
}