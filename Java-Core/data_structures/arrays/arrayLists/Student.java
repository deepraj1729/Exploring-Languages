package data_structures.arrays.arrayLists;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Collections;

//MarksList class
class MarksList {
    private int totalMarks = 500;
    private int totalMarksObtained=0;
    private ArrayList<Integer> studentMarks = new ArrayList<Integer>();

    //member function
    public void setMarks(int[] marks){
        for(int mark:marks){
            studentMarks.add(mark);
        }
    }

    //member function
    public int getNumberOfMarks(){
        return studentMarks.size();
    }

    //member function
    public int getTotalSumOfMarks(){
        int sum = 0;

        for(int i=0;i<studentMarks.size();i++){
            sum+=studentMarks.get(i);
        }
        this.totalMarksObtained = sum;
        return sum;
    }

    //member function
    public int getMinimumMark(){
        return Collections.min(studentMarks);
    }

    //member function
    public int getMaximumMark(){
        return Collections.max(studentMarks);
    }

    //member function
    public BigDecimal getAverageMarks(){
        return new BigDecimal("100").multiply(new BigDecimal(this.totalMarksObtained).divide(new BigDecimal(this.totalMarks)));
        
    }

    //member function
    public void getMarksReport(){
        System.out.println("Number of Subjects: "+this.getNumberOfMarks());
        System.out.println("Marks Obtained: "+this.getTotalSumOfMarks());
        System.out.println("Total Marks out of: "+this.totalMarks);
        System.out.println("Max Mark: "+this.getMaximumMark());
        System.out.println("Min Mark: "+this.getMinimumMark());
        System.out.println("Percentage: "+this.getAverageMarks()+"%");
    }
}



//Student class
public class Student extends MarksList{
    private String name,enroll_no,dob;

    public Student(String name,String enroll_no,String dob){
        this.name=name;
        this.enroll_no=enroll_no;
        this.dob=dob;
    }

    public void getStudentProfile(){
        System.out.println("------------------------------------------");
        System.out.println("Progress Report");
        System.out.println("------------------------------------------");
        System.out.println("Name: "+this.name);
        System.out.println("Enroll_no "+this.enroll_no);
        System.out.println("DOB: "+this.dob);
    }

    public void getMarks(int[] marks){
        setMarks(marks);
    }

    
    public void addMark(int mark){}

    public void removeMark(int index){}



    public void getReport(){
        this.getStudentProfile();
        this.getMarksReport();
    }

    public static void main(String[] args) {
        int[] marks={89,92,93,84,85};
        Student s1 = new Student("Deepraj","18UCS039","11/09/1999");
        s1.getMarks(marks);
        s1.getReport();
    }
}




/* 

ArrayLists are dynamic arrays and comes with different methods
It is a part of Java collections (vector<int> STL equivalent in C++)

*/