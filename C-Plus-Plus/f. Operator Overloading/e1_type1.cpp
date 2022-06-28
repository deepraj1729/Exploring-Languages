#include<iostream>
using namespace std;

class Time
{
    int hrs;
    int mins;

    public:
        Time();
        Time(int t)
        {
            hrs = t/60;
            mins = t%60;
        }
        void display()
        {
            cout<<"\n\nhrs = "<<hrs<<"  mins =  "<<mins<<endl;
        }
};

int main()
{
    Time t1;
    int duration = 85;
    t1 = Time(duration);             // int to class type time
    t1.display(); 
    return 0;
}