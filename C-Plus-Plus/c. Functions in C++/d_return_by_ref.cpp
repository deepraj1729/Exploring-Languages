#include<iostream>
using namespace std;

int &max(int &a,int &b) // return type reference function
{
    if(a>b)
        return a;
    else if (a<b)
        return b;
    else
    {
        cout<<"(Both are equal....): ";
        return a;
    }
    
}

int main()
{
    int m,n;
    cout<<"Enter 2 numbers: "<<endl;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    cout<<"\nThe largest of the numbers is: "<<max(m,n)<<endl;
    return 0;
}