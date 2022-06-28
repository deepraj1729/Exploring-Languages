package data_types;

public class BiNumber {
    public double num1,num2;
    public BiNumber(double num1,double num2){
        this.num1 = num1;
        this.num2 = num2;
    }

    public double add(){
        return this.num1+this.num2;
    }

    public double multiply(){
        return this.num1*this.num2;
    }

    public void doubleUp(){
        this.num1 = 2*this.num1;
        this.num2 = 2*this.num2;
    }

    public double getNumber1(){
        return this.num1;
    }

    public double getNumber2(){
        return this.num2;
    }

    public static void main(String[] args) {
        BiNumber numbers = new BiNumber(2.0,3.0);
        System.out.println(numbers.add());
        System.out.println(numbers.multiply());
        numbers.doubleUp();
        System.out.println(numbers.getNumber1());
        System.out.println(numbers.getNumber2());
    }

}
