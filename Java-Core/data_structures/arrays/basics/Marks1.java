package data_structures.arrays.basics;

import java.util.Arrays;

public class Marks1 {
    private int[] classMarks;

    public Marks1(int... marks){
        classMarks=marks;
    }

    public void getTotalClassMarks(){
        int sum = 0;

        /* classMarks.length is a property not a method */
        for(int mark:classMarks){
            sum+=mark;
        }

        System.out.println("Class Marks List: "+Arrays.toString(this.classMarks));
        System.out.println("Total sum = "+sum);
    }
    public static void main(String[] args) {
        Marks1 class_10 = new Marks1(new int[] {98,87,79,90,92,67,70});
        class_10.getTotalClassMarks();
    }
}

/* 

1. Enhanced For loop:

        for(int mark:classMarks){
            sum+=mark;
        }
    
        
2. Arrays.fil():

    int[] marks = new int[5];

    Arrays.fill(marks,100);    (Fills the entire marks array with 100)


3. Compare each element of 2 arrays:

    
    Arrays.equals(array1,array2); (returns boolean)

3. Sort Arrays:

    Arrays.sort(array1);  (doesn't return anything but sorts the array with the values of its elements)




*/
