package file_handling;
 
import java.io.File;    
import java.io.IOException;

class Example {  
            public static void main(String args[]) {  
                try {  
                        // Creating an object of a file  
                        File f0 = new File("./file_handling/Example.class");   
                        if (f0.createNewFile()) {  
                                    System.out.println("File " + f0.getName() + " is created successfully.");  
                        } else {  
                                    System.out.println("File is already exist in the directory.");  
                        }  

                        // Getting path of the file   
                        System.out.println("The absolute path of the file is: " + f0.getAbsolutePath());     
            
                        // Checking whether the file is writable or not  
                        System.out.println("Is file writeable?: " + f0.canWrite());    
            
                        // Checking whether the file is readable or not  
                        System.out.println("Is file readable " + f0.canRead());    
            
                        // Getting the length of the file in bytes  
                        System.out.println("The size of the file in bytes is: " + f0.length());
                        
                    } 
                catch (IOException exception) {  
                        System.out.println("An unexpected error is occurred.");  
                        exception.printStackTrace();  
                    }   
    }  
} 
