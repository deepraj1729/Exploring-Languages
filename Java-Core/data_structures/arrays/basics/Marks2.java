package data_structures.arrays.basics;

import java.math.BigDecimal;
import java.util.Arrays;

public class Marks2 {
    private String name;
    private int[] studentMarks;
    private int totalMarks = 500;
    private int totalMarksObtained=0;

    //constructor
    public Marks2(String name, int[] marks){
        this.name=name;
        this.studentMarks=marks;
        Arrays.sort(this.studentMarks);
    }


    //member function
    public int getNumberOfMarks(){
        return this.studentMarks.length;
    }
    
    //member function
    public int getTotalSumOfMarks(){
        int sum=0;
        for(int mark:studentMarks){
            sum+=mark;
        }
        this.totalMarksObtained = sum;
        return sum;
    }


    //member function
    public int getMinimumMark(){
        return studentMarks[0];
    }


    //member function
    public int getMaximumMark(){
        return studentMarks[studentMarks.length-1];
    }
    

    //member function
    public BigDecimal getAverageMarks(){
        //One liner
        return new BigDecimal("100").multiply(new BigDecimal(this.totalMarksObtained).divide(new BigDecimal(this.totalMarks)));
        
    }


    //main
    public static void main(String[] args) {
        String name = "Shyam";
        int[] marks = {99,89,92,95,90};
        Marks2 s1 = new Marks2("Shyam",marks);
        
        int numOfMarks = s1.getNumberOfMarks();
        int sum = s1.getTotalSumOfMarks();
        int maxMark = s1.getMaximumMark();
        int minMark = s1.getMinimumMark();
        BigDecimal avg = s1.getAverageMarks();
        System.out.println("Name: "+name+"  | "+" NoOfSubjects: "+numOfMarks+"  | "+"  Marks Obtained: "+sum+"  | "+"  MaxMark: "+maxMark+"  | "+"  MinMark: "+minMark+"  | "+"OutOf: 500"+"  | "+"  Avg: "+avg);
    }

}
