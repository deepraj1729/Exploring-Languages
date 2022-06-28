#include<iostream>
#include<string>
using namespace std;

class Base
{
    private:
        int a=20;
    public:
        int b;
        Base(){  cout<<"Constructor called"<<endl;  }
        void get_ab();
        int get_a();
        void show_a();
};

class Derived:public Base
{
    int c;

    public:
        void mul();
        void display();
};
//---------------------------------------------------------------------------------------
void Base::get_ab()            //Base class
{
    a =5;
    b = 10;
}

int Base::get_a()             //Base class
{
    return a;
}

void Base::show_a()           //Base class
{
    cout<<"a = "<<a<<endl;
}

void Derived::mul()          //Derived class
{
    c = b*get_a();
}

void Derived::display()      //Derived class
{
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl<<endl;
}

//-------------------------------------Main Begins ------------------------------------
int main()
{
    Derived d;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    return 0;
}