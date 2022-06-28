#include<iostream>
using namespace std;

double sum(double a, double b)  // Sum function that returns double value of the sum of the parameters
{
    return a+b;
}

int main()
{
    cout<<"\nWelcome to sample Sum function ------"<<endl;
    double a,b;
    cout<<"\nEnter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"\nThe sum of "<<a<<" and "<<b<<" is = "<<sum(a,b)<<endl;
    return 0;
}