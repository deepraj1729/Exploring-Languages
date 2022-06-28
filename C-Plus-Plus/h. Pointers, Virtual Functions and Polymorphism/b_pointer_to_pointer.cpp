/*
    Pointers-to-pointers:

    Assigning pointer addresses that points to another pointer which stores address of another variable with primitive data type is called pointer
    to pointer operations.

*/
#include<iostream>
using namespace std;

int main()
{
    int a,*ptr1,**ptr2,***ptr3;
    a =100;
    ptr1 = &a;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    // accessing 'a' through variable 'a'
    cout<<"\n\nAccessing \'a\' through variable \'a\' ---------------------"<<endl<<endl;
    cout<<"\n\na= "<<a<<endl;
    cout<<"Address of a = "<<&a<<endl;

    // accessing 'a' through ptr1 
    cout<<"\n\nAccessing \'a\' through ptr1 ---------------------"<<endl<<endl;
    cout<<"Address stored in ptr1 = "<<ptr1<<endl;
    cout<<"*Value pointing to that address,*ptr1 = "<<*ptr1<<endl;
    cout<<"Address of pointer ptr1 = "<<&ptr1<<endl;

    // accessing 'a' through ptr2
    cout<<"\n\nAccessing \'a\' through ptr2 ---------------------"<<endl<<endl;
    cout<<"Address stored in ptr2 = "<<ptr2<<endl;
    cout<<"*Value pointing to that address,*ptr2 = "<<*ptr2<<endl;
    cout<<"Value stored in \'a\' through ptr2, **ptr2 = "<<**ptr2<<endl;
    cout<<"Address of pointer ptr2 = "<<&ptr2<<endl;

    // accessing 'a' through ptr3
    cout<<"\n\nAccessing \'a\' through ptr3 ---------------------"<<endl<<endl;
    cout<<"Address stored in ptr3 = "<<ptr3<<endl;
    cout<<"*Value pointing to that address,*ptr3 = "<<*ptr3<<endl;
    cout<<"Value stored in \'a\' through ptr3, ***ptr3 = "<<***ptr3<<endl;
    cout<<"Address of pointer ptr3 = "<<&ptr3<<endl<<endl;

    return 0;

}