/*
        Inline function: 
        --------------------

        An inline function is a function which is expanded in line when invoked.That is, 
        the compiler replaces the function call with the corresponding function code (something similar to macros expansion)

        It is defined as follows:

        inline function-header
        {
            function-body
        }


        Situations where inline expansions may not work:

        1. For functions if a loop,switch or a goto exists.
        2. For functions not returning values, if a return statement exists.
        3. If functions contain static variables.
        4. If inline functions are recursive (function calls itself).
*/

#include<iostream>
#define pi 3.14
using namespace std;

inline double circ_area(float rad)
{
    return pi*rad*rad;
}

int main()
{
    float rad;
    cout<<"Enter the radius of circle: ";
    cin>>rad;
    cout<<"\nArea of the circle = "<<circ_area(rad)<<endl;
    return 0;
}



