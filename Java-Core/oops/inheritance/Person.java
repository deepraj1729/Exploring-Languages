package oops.inheritance;

public class Person {
    private String name;
    private int age;

    public void setName(String name){
        this.name=name;
    }

    public void setAge(int age){
        this.age=age;
    }

    public void showPersonalProfile(){
        System.out.println("-----------------------------");
        System.out.println("Name: "+this.name);
        System.out.println("Age:"+this.age);
        System.out.println("-----------------------------");
        System.out.println("Personal Skills: ");
        this.getSoftSkills();
        this.getHardSkills();
    }

    public void getSoftSkills(){
        System.out.println("Soft skills of a person are: Communication Skills, Writing skills, Language, Typing");
    }

    public void getHardSkills(){
        System.out.println("Hard Skills of a Person are: Education, Job, Shopping");
    }
}
