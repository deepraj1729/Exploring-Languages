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
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        void display();

};

Complex operator+(Complex num1,Complex num2)
{
    // Complex temp;
    // temp.x = num1.x + num2.x;
    // temp.y = num1.y + num2.y;
    // return temp                                                // This calls the default constructor
    
    return Complex((num1.x + num2.x),(num1.y + num2.y));          // This calls the constructor with arguments
} 

Complex operator-(Complex num1,Complex num2)
{
    // Complex temp;
    // temp.x = num1.x-num2.x;
    // temp.y = num1.y-num2.y;
    return Complex((num1.x - num2.x),(num1.y - num2.y));
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