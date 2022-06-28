/*      Outside the class declaration and definition...................................................

        Normally the member functions are by default inline if they follow the inline restrictions
        But while defining them outside the class, they aren't inline by default

        To make them inline, use inline at first while defining
*/

#include<iostream>
using namespace std;

class ABC
{
    int b;
    public:
        void get();
        void set();
};

inline void ABC::get()  // defining get function outside the class and making it inline
{
    int a;
    cout<<"\nEnter a number: ";
    cin>>a;
    b=a;
}

void ABC::set()  // defining set function outside the class (not inline by default unless we explicitly define inline)
{
    cout<<"\nThe number stored in the object is: "<<b<<endl<<endl;
}


int main()
{
    ABC mno;
    mno.get();
    mno.set();
    return 0;
}