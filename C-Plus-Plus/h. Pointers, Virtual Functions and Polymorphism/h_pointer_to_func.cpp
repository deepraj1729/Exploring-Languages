#include <iostream>
using namespace std; 
// A normal function with an int parameter 
// and void return type 
void fun(int a) 
{ 
    cout<<"Value of a is = "<<a<<endl<<endl; 
} 
  
int main() 
{ 
    // fun_ptr is a pointer to function fun()  
    void (*fun_ptr)(int) = &fun; 
  
    /* The above line is equivalent of following two 
       void (*fun_ptr)(int); 
       fun_ptr = &fun;  
    */
  
    // Invoking fun() using fun_ptr 
    (*fun_ptr)(10); 
  
    return 0;
}