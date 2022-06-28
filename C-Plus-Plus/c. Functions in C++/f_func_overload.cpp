/*
    Function overloading: 
    ---------------------

    Function overloading refers to defining functions with same name but with the differences in its parameters and return type.
    It is also called function polymorphism in OOP (Object Oriented Programming). 

*/
#include<iostream>
using namespace std;

void add()                   // 1st add
{
    int a=12,b=13;
    cout<<"\na = "<<a<<"  b= "<<b<<"  sum = "<<a+b<<endl;
}

int add(int a,int b)         // 2nd add
{
    return a+b;
}

float add(float a,float b)   // 3rd add
{
    return a+b;
}

int add(int a,int b,int c)   // 4th add
{
    return a+b+c;
}

int main()
{
    int m=10,n=20,o = 45;
    float p=12.2,q=34.5;
    cout<<"\nSample program to show function overloading............."<<endl;
    add();                                                                     // calls 1st add function
    cout<<"\nm = "<<m<<"  n = "<<n<<"  sum = "<<add(m,n)<<endl;                  // calls 2nd add function
    cout<<"\np = "<<p<<"  q = "<<q<<"  sum = "<<add(p,q)<<endl;            // calls 3rd add function
    cout<<"\nm = "<<m<<"  n = "<<n<<"  o = "<<o<<"  sum = "<<add(m,n,o)<<endl<<endl;    // calls 4th add function

    return 0;
}