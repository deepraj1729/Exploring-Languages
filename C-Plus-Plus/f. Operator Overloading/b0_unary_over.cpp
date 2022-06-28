#include<iostream>
using namespace std;

class Subtract
{
    int x,y,z;
    public:
        void get_data(int ,int,int);
        void display();
        void operator-();     // Overloaded unary minus operator
};

void Subtract::get_data(int a,int b,int c)
{
    x= a;
    y=b;
    z=c;
}

void Subtract::display()
{
    cout<<"\nx = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl<<endl;
}

void Subtract::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}

int main()
{
    Subtract S;

    S.get_data(12,-12,30);
    cout<<"S: ";S.display();

    -S;                         // activates operator-() function

    cout<<"-S: ";S.display();
    return 0;
}
