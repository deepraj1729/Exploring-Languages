#include<iostream>
using namespace std;

int main()
{
    long double a,b;  // float type variables
    cout<<"Enter two numbers:"<<endl;
    cout<<"First number: ";
    cin>>a;                      //  ">>" Extraction operator
    cout<<"Second number: ";
    cin>>b;
    cout<<"The numbers are: "<<a<<" and "<<b<<endl;   // Cascading operator "<<"
    cout<<"\nsum = "<<a+b<<endl;
    cout<<"Average = "<<(a+b)/2<<endl;
    return 0;
}