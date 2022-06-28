// Passing the object by reference as argument
#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
    int hrs;
    int mins;
    public:
        void getTime(int h,int m)
        {
            hrs = h;
            mins = m;
        }

        void putTime()
        {
            cout<<hrs<<" hrs : "<<mins<<" mins"<<endl;
        }
        
        void sum(Time &obj1 ,Time &obj2); // passing reference of 2 objects of the same class

};

void Time::sum(Time &t1,Time &t2)  // defining sum function with 2 references of objects as parameters
{
    mins = t1.mins +t2.mins;
    hrs = mins/60;
    mins = mins%60;
    hrs = hrs + t1.hrs + t2.hrs;
}

int main()
{
    Time T1,T2,T3;
    T1.getTime(2,45);
    T2.getTime(3,30);

    T3.sum(T1,T2);    // T3 = T1 + T2 (kind off)

    cout<<"\n"<<setw(15)<<"T1 = ";T1.putTime();
    cout<<"\n"<<setw(15)<<"T2 = ";T2.putTime();
    cout<<"\n"<<setw(15)<<"Sum, T3 = ";T3.putTime();
    cout<<endl;
}