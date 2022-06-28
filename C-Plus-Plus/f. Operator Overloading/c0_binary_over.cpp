#include<iostream>
using namespace std;

class Complex
{
    float x;
    float y;

    public:
        Complex(){ cout<<"\nNormal constructor called......"<<endl;}
        Complex(float real,float imag)
        {
            cout<<"\n\nConstructor with arguments called successfully......"<<endl;
            x = real;
            y = imag;
        }
        Complex operator+(Complex);
        Complex operator-(Complex);
        void display();

};

Complex Complex::operator+(Complex num)
{
    // Complex temp;
    // temp.x = x + num.x;
    // temp.y = y + num.y;
    // return temp;                          // This calls the normal constructor 

    return Complex((x+num.x),(y+num.y));     // This calls the constructor with arguments
}

Complex Complex::operator-(Complex num)
{
    // Complex temp;
    // temp.x = x-num.x;
    // temp.y = y-num.y;
    // return temp;                          // This calls the normal constructor 
    return Complex((x-num.x),(y-num.y));     // This calls the constructor with arguments
}

void Complex::display()
{
    cout<<x<<" + i*"<<y<<endl;
}
int main()
{
    Complex C1,C2,C3;
    C1 = Complex(21.3,22);
    C2 = Complex(134.4,200);

    cout<<"\n\nBinary Addition........."<<endl<<endl;
    C3 = C1 + C2;

    cout<<"C1 = ";C1.display();
    cout<<"C2 = ";C2.display();
    cout<<"C3 = ";C3.display();

    cout<<"\n\nBinary Subtraction........."<<endl;
    C3 = C1 - C2;

    cout<<"C1 = ";C1.display();
    cout<<"C2 = ";C2.display();
    cout<<"C3 = ";C3.display();
    return 0;
}