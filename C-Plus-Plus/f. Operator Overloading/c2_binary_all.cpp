#include<iostream>
using namespace std;

class Maths
{
    float x;
    public:
        Maths();
        Maths(float a){x=a;};
        Maths operator+(Maths);
        Maths operator-(Maths);
        Maths operator*(Maths);
        Maths operator/(Maths);
        Maths operator<(Maths);
        Maths operator<=(Maths);
        Maths operator>=(Maths);
        Maths operator==(Maths);
        Maths operator!=(Maths);
        void display();
};


Maths Maths::operator+(Maths m)
{   
    return Maths(x + m.x);
}

Maths Maths::operator-(Maths m)
{
    return Maths(x-m.x);
}

Maths Maths::operator*(Maths m)
{
    return Maths(x * m.x);
}

Maths Maths::operator/(Maths m)
{
    return Maths(x/m.x);
}

Maths Maths::operator<(Maths m)
{
    return Maths((x<m.x)?1:0);
}

Maths Maths::operator<=(Maths m)
{
    return Maths((x<=m.x)?1:0);
}

Maths Maths::operator>=(Maths m)
{
    return Maths((x>=m.x)?1:0);
}

Maths Maths::operator==(Maths m)
{
    return Maths((x==m.x)?1:0);
}

Maths Maths::operator!=(Maths m)
{
    return Maths((x!=m.x)?1:0);
}

void Maths::display()
{
    cout<<x<<endl<<endl;
}

int main()
{
    Maths m1(150),m2(12.4);

    cout<<"\nm1 = ";m1.display();
    cout<<"m2 = ";m2.display();
    Maths m3 = m1+m2;
    cout<<"m3 = ";m3.display();

    Maths m4 = m1-m2;
    cout<<"m4 = ";m4.display();

    Maths m5 = m1*m2;
    cout<<"m5 = ";m5.display();

    Maths m6 = m1/m2;
    cout<<"m6 = ";m6.display();

    Maths m7 = m1<m2;
    cout<<"m7 = ";m7.display();

    Maths m8 = m1<=m2;
    cout<<"m8 = ";m8.display();

    Maths m9 = m1>=m2;
    cout<<"m9 = ";m9.display();

    Maths m10 = m1==m2;
    cout<<"m10 = ";m10.display();

    Maths m11 = m1!=m2;
    cout<<"m11 = ";m11.display();

    return 0;
}
