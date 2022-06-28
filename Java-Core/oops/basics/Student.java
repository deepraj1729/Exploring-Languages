package oops.basics;
import java.util.Scanner;


public class Student {
    private String name,grade;
    private double aggregateMarks, totalMarks,percentage;

    public Student(){}

    public Student(String name){
        this.name = name;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setMarks(double aggr,double total){
        this.aggregateMarks = aggr;
        this.totalMarks = total;
    }

    public String getGrade(double percentage){
        String grade="";
        int rangeVal = (int) (percentage/10);
        
        switch(rangeVal){
            case 10: grade="A+";break;
            case 9: grade="A+";break;
            case 8: grade="A";break;
            case 7: grade="B";break;
            case 6: grade="C";break;
            case 5: grade="D";break;
            case 4: grade="E";break;
            case 3: grade="F";break;
        }
        return grade;
    }
    

    public void getResult(){
        this.percentage = (this.aggregateMarks/this.totalMarks)*100;
        this.grade = this.getGrade(percentage);
        String percentage_sign = "%";
        System.out.printf("Percentage obtained: %.2f %s  Grade: %s",this.percentage,percentage_sign,this.grade).println();
    }

    public static void main(String[] args) {
        Student s1 = new Student();

        System.out.printf("Enter name: ");
        Scanner myObj = new Scanner(System.in);
        s1.setName(myObj.nextLine());

        System.out.printf("Enter total Marks Obtained (out of 500): ");
        Scanner myObj2 = new Scanner(System.in);
        double marks = myObj2.nextDouble();
        
        s1.setMarks(marks,500);
        s1.getResult();

        myObj.close();
        myObj2.close();
    }
}
