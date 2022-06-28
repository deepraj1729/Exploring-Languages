#include<iostream>

using namespace std;

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void display(int a,int b)
{
    cout<<"A: "<<a<<" "<<" B: "<<b<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Before swapping: "<<endl;
    display(a,b);
    swap(a,b);
    cout<<"After swapping: "<<endl;
    display(a,b);
    return 0;
}