#include<iostream>
using namespace std;

class Subtract
{
    int x,y,z;
    public:
        void get_data(int ,int,int);
        void display();
        friend void operator-(Subtract &);     // "Remember to pass as reference in order to change the value permanently within the class"
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

void operator-(Subtract &obj)      // Taken reference to the object of class Subtract in order to change its value permanently
{
    obj.x = -obj.x;
    obj.y = -obj.y;
    obj.z = -obj.z;
}

int main()
{
    Subtract S;

    S.get_data(12,-12,30);
    cout<<"S: ";S.display();

    -S;                         // activates operator-() friend function

    cout<<"-S: ";S.display();
    return 0;
}