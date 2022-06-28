/*
    The structures and classes both serve as a template that enables user to define its data properties.

    Limitations of structures:
    -----------------------------------
    1.  struct
        {
            int a;
        }c1,c2,c3;

        we can't write:   c3 = c1 + c2;

    2. Data hiding is not present in structures (in ANSI C) as member variables are always public. 

    This lead to the intro to classes :-
    -------------------------------------- 

    1. A class is a way to bind the data and its associated functions together (also known as encapsulation).
    2. It allows data hiding.
    3. It also allows data abstraction (It refers to the act of representing essential features without including the background details or explanations).
    4. Inheritance
    5. Polymorphism

    Objects:-
    ---------------------------------------
    1. A self contained entity that consists of both data and procedures(functions) to manipulate the data.
    2. An object is an instance of a class.
    
*/

#include<iostream>
using namespace std;

class ABC        // class definition
{
    public:      // Access specifier defines the visbility of the members ( maybe public, private or protected )
    int a=10;
};

int main()
{
    ABC m;                                                             // 'm' is an object of the class "ABC"
    cout<<"\nClass ABC contains variable \'a\' = "<<m.a<<endl<<endl;   // This is possible only because member variable "a" is kept public
    return 0;
}
