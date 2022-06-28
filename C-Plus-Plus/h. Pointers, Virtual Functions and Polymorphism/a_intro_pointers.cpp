/*
    Pointers:
    ------------------------------------------------------------------------------------------------------------------------------------------
    A Pointer is a derived data type that stores the address of a variable of the same data type ,i.e it stores the address of that variable 
    and not the data contained within it.

    Use:
    ------------------------------------------------------------------------------------------------------------------------------------------
    It is used to efficiently handle memory usage.

    Example:
    ------------------------------------------------------------------------------------------------------------------------------------------
    int *ptr,num;
    num = 123;

    ptr = &num;        // & is the address of operator (or reference of operator) , also ptr is storing the reference/address of num.

    cout<<"num = "<< num << endl;    // 123
    cout<<"*ptr = "<<*ptr << endl;   // 123       // * here is the dereference operator that points to the value stored in ptr.
    ------------------------------------------------------------------------------------------------------------------------------------------

    Note:-
    ------------------------------------------------------------------------------------------------------------------------------------------
    **** Uninitialized Pointers are called Null pointers. Pointers of any data type can be assigned with one common value i.e 
    '0' called Null address.
     
*/

#include<iostream>
using namespace std;
int main()
{
    int *ptr,marks;
    
    marks = 99;
    ptr = &marks;

    cout<<"\n\nMarks stored is variable \'marks\' = "<<marks<<endl;
    cout<<"The address of \'marks\' = "<<&marks<<endl;
    cout<<"Marks stored in pointer variable \'ptr\' = "<<*ptr<<endl;
    cout<<"The address stored in \'ptr\' = "<<ptr<<" ,which is the address of \'marks\'"<<endl<<endl;
    return 0;

}