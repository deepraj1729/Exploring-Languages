/*
    Manipulators: Manipulators are operators that are used to format the data display

    Commonly used manipulators are: 

    1. endl
    2. setw

*/

#include<iostream>
#include<iomanip>   // required for "setw"
using namespace std;

int main()
{
    cout<<"\"endl\" works the same way as the new line character "<<endl;

    /* setw is is used for formatted output (right-justified) as given below in the program: 
    
            m =     232424
            p =        343
            j =      23211
    */
    int m = 232424;
    int p = 343;
    int j = 23211;
    cout<<"m = "<<setw(10)<<m<<endl;
    cout<<"p = "<<setw(10)<<p<<endl;
    cout<<"j = "<<setw(10)<<j<<endl;
    return 0;
}