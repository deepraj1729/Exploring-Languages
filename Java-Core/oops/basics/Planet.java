package oops.basics;

class Planet{
    String name;

    void setName(String name){
        this.name = name;
    }

    void getName(){
        System.out.printf("Planet name: %s",this.name).println();
    }

    public static void main(String[] args) {
        Planet earth = new Planet();
        earth.setName("Earth");
        earth.getName();

        String s1 = "This is a string";
        s1 = "This is a new String";
        System.out.println(s1);
    }
}