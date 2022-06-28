package wrapper_classes;

public class Test {
    
    public static void main(String[] args) {
        Integer i1 = Integer.valueOf("123");
        Integer bin1 = Integer.valueOf("101101",2);  //Binary (base 2)
        Double d1 = Double.valueOf("12.234");
        Boolean b1 = Boolean.valueOf("true");
        Float f1 = Float.valueOf("23.45f");

        int i2 = Integer.parseInt("149");
        double d2 = Double.parseDouble("23.45");
        boolean b2 = Boolean.parseBoolean("false");
        float f2 = Float.parseFloat("23.45f");

        System.out.println("i1 = "+ i1.intValue());
        System.out.println("bin1 = "+ bin1.intValue());
        System.out.println("d1 = "+ d1.doubleValue());
        System.out.println("b1 = "+ b1.booleanValue());
        System.out.println("f1 = "+ f1.floatValue());

        System.out.println();

        System.out.println("i2 = "+i2);
        System.out.println("d2 = "+d2);
        System.out.println("b2 = "+b2);
        System.out.println("f2 = "+f2);

    }
}
