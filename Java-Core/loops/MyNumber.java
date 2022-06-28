package loops;
import java.util.Scanner;

public class MyNumber{
    private int n;
    public MyNumber(int N){
        n = N;
    }

    public boolean isPrime(){
        for(int i=2;i<n;i++){
            if(n%i ==0)
                return false;
        }
        return true;
    }

    public int sumUptoN(){
        int sum=0;
        for(int i =1;i<=n;i++){
            sum+=i;
        }
        return sum;
    }

    public int sumOfDivisors(){
        int sum=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        return sum;
    }

    public void printNumberTriangle(){
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                System.out.printf("%d",j);
            }
            System.out.println("");
        }
    }
    public static void main(String[] args) {

        System.out.printf("Enter any positive integer: ");
        Scanner myObj = new Scanner(System.in);
        int num = myObj.nextInt();
        System.out.println("");

        MyNumber num1 = new MyNumber(num);
        System.out.println("Is Prime?: "+num1.isPrime());
        System.out.println("Sum upto N: "+num1.sumUptoN());
        System.out.println("Sum of Divisors: "+num1.sumOfDivisors());
        System.out.println("Number Triangle: ");
        num1.printNumberTriangle();
        myObj.close();
        

    }
}
