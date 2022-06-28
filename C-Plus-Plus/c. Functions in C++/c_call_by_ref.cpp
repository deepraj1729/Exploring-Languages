#include<iostream>

using namespace std;

void swap(int &a,int &b)
{
    cout<<"\nSwap function called with parameters as references to the original variables passed as the arguments....."<<endl;
    int temp=a;
    a=b;
    b=temp;
}

void swap(int *a,int *b)
{
    cout<<"\nSwap function with parameters as pointers to the references passed as arguments......"<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(int a,int b)
{
    cout<<"A = "<<a<<" "<<" B = "<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"\nBefore swapping: "<<endl;
    display(a,b);
    swap(a,b);       // calling the swap function that passes the original variables but accepts the references to those variables 
    cout<<"\nAfter swapping: "<<endl;
    display(a,b);
    cout<<"\n\nSwaping again......."<<endl;
    cout<<"\nBefore swapping: "<<endl;
    display(a,b);
    swap(&a,&b);     // calling swap function that passes reference as arguments and recieved by the pointer by the parameter 
    cout<<"\nAfter swapping: "<<endl;
    display(a,b);
    return 0;
}