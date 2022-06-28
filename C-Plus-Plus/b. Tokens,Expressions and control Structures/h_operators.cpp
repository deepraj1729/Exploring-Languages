/*

    The operators in C++ includes:-

    1.  ::      --> Scope resolution operator  (returns the global scope value of any variable)
    2.  ::*     --> Pointer-to-member declarator
    3.  ->*     --> pointer-to-member operator
    4.  .*      --> Pointer-to-member operator
    5.  delete  --> Used to free up memory space of variables (implicit call of malloc)
    6.  endl    --> Used as end line
    7.  new     --> Creates memory space for a variable based on its datatype
    8.  setw    --> Field width operator


*/

#include<iostream>
using namespace std;
int a = 123;

int main()
{
    cout<<"\n\nVariable \'a\' in global scope = "<<a<<endl;
    cout<<"Variable \'a\' in global scope with scope resolution = "<<::a<<endl;

    int a = 99;  // local main scope
    {
        int a = 987;  // local scope inside curly braces
        cout<<"\n\nVariable \'a\' in local scope (under curly braces) = "<<a<<endl;
        cout<<"Variable \'a\' in global scope with scope resolution = "<<::a<<endl;

    } // end of scope for a = 987
    cout<<"\n\nVariable \'a\' in main scope = "<<a<<endl;
    cout<<"Variable \'a\' in global scope with scope resolution = "<<::a<<endl;


    // Memory management operators include new, delete

    // "new" operator assigns memory as per the data type
    int *b,*c;
    b = new int(25);
    c = new int;
    *c= 23;

    cout<<"\n\n*b has address =  "<<b<<" and it contains : "<<*b<<endl;
    cout<<"*c has address =  "<<c<<" and it contains : "<<*c<<endl;

    // "delete" operator is used to free up memory for variables 

    delete(c);
    delete(b);

    // This time the values in b and c will have garbage but same addresses
    cout<<"\n*b has address =  "<<b<<" and it contains : "<<*b<<endl;
    cout<<"*c has address =  "<<c<<" and it contains :  "<<*c<<endl;


    return 0;
}