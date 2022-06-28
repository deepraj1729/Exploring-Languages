#include<iostream>
using namespace std;

int main()
{
    int *ptr,a =12;
    ptr = &a;            // address of "a" is assigned to "ptr"   i.e. any change in "ptr" will now affect the value of "a"

    cout<<"\nInitial value of \"a\" = "<<a<<endl;
    cout<<"Initial value of \"ptr\" = "<<*ptr<<endl;

    // making changes in the value of "ptr"
    *ptr = 2323;
    cout<<"\nValue of \"a\" after 1st change = "<<a<<endl;
    cout<<"Value of \"ptr\" after 1st change = "<<*ptr<<endl;

    // making change in the value of "a"
    a= 9999;
    cout<<"\nValue of \"a\" after 2nd change = "<<a<<endl;
    cout<<"Value of \"ptr\" after 2nd change = "<<*ptr<<endl<<endl;

    return 0;

}