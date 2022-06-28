package oops.inheritance;

class Developer extends Person{
    public Developer(String name,int age){
        this.setName(name);
        this.setAge(age);
    }

    public void getDevSoftSkills(){
        System.out.println("Some Soft skills of a Developer are: Communication skills, Body language, Reading, Mouse Clicking");
    }

    public void getDevHardSkills(){
        System.out.println("Some hard skills of a Developer are: Programming, Problem Solving, Technical Knowledge, Ease of building");
    }

    public void showDevProfile(){
        this.showPersonalProfile();
        System.out.println("-----------------------------");
        System.out.println("Developer skills");
        this.getDevSoftSkills();
        this.getDevHardSkills();
    }
}
