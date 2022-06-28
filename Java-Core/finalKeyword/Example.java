package finalKeyword;

//Final class "Base"
final class Base{
    public void fun1(){
        System.out.println("fun1");
    }
    public void fun2(){
        System.out.println("fun2");
    }

    public void getFunc(){
        this.fun1();
        this.fun2();
    }

}


class Base2{
    public void someFunction1(){}
    public final void someFunction2(){}

}

class Child2 extends Base2{
    public void someFunction1(){}               //Overriding the inherited function from superClass
    // public final void someFunction2(){}       //Error as once u create a final method u cant override it


}

/*
default class Child cant be inherited from Base
Inheritance not possible once a class is declared as final

class Child extends Base{                    
    public void fun3()
}

*/
public class Example {
    private final int x;                        //  final instance variable
    private final static int y;                 //  final static variable
    
    {
        x=10; // instance initialization block
    }


    static
    {
        y=90; // static initialization block
    }


    public void getValues(){
        final int y=12; // final local variable
        System.out.println("x = "+x);
        System.out.println("y = "+y);
    }

    public void getOriginalValues(){
        System.out.println("x = "+x);
        System.out.println("y = "+y);
    }



    public static void main(String[] args) {
        Example e1 = new Example();
        e1.getValues();
        e1.getOriginalValues();

        Base e2 = new Base();
        e2.getFunc();
    }
}