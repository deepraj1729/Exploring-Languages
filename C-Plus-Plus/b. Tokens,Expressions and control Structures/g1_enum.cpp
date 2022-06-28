#include<iostream>
using namespace std;

enum shape
{
    circle=1,
    rectangle=2,
    triangle=3

};

int main()
{
    cout<<"Enter shape code: ";
    int code;
    cin>>code;
    while(code>=circle && code <= triangle)
    {
        switch(code)
        {
            case circle:cout<<"\nIt\'s a Circle"<<endl;
                        break;
            case rectangle:cout<<"\nIt\'s a Rectangle"<<endl;
                        break;
            case triangle:cout<<"\nIt\"s a Triangle"<<endl;
                        break;
            default: cout<<"\nOoops Color code not found......"<<endl;             
        }
        cout<<"\n\nEnter shape code: ";
        cin>>code;
    }
    cout<<"\n\nYou exited..........."<<endl;
    return 0;
}