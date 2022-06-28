#include<iostream>
using namespace std;

int main()
{
    int *ptr,num;
    num = 276;
    ptr = &num;

    cout<<"\nnum = "<<num<<endl;
    cout<<"*ptr = "<<*ptr<<endl;

    *ptr = 675;

    cout<<"\n*ptr = "<<*ptr<<endl;
    cout<<"num = "<<num<<endl;

    *ptr = (*ptr)/5;

    cout<<"\n*ptr = "<<*ptr<<endl;
    cout<<"num = "<<num<<endl;
    return 0;
}