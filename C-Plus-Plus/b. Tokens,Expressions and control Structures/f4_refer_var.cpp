#include<iostream>
using namespace std;

int main()
{
    int a=23;
    int &m = a;

    cout<<"\n\nReference variable \'m\' refers to address "<<&m<<" and contains value: "<<m<<endl;
    cout<<"Variable \'a\' refers to "<<&a<<" and contains value = "<<a<<endl;

    // make change to 'm' .... it will be reflected to the referred variable 'a'
    m = 123;

    cout<<"\n\nReference variable \'m\' refers to address "<<&m<<" and now it contains value: "<<m<<endl;
    cout<<"Variable \'a\' refers to "<<&a<<" and now it contains value = "<<a<<endl;


    return 0;
}