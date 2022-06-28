#include<iostream>
using namespace std;

class ABC
{
    static int count;
    int num;

    public:
        void get_num(int a)
        {
            num = a;
            count++;
        }
        void get_count()
        {
            cout<<"Count = "<<count<<endl;
        }
};

int ABC::count; // static data member definition (required , as static data members are stored separately rather than as a part of an object)  

int main()
{
    ABC m;
    cout<<"\nInitialy no data is stored so: "<<endl;
    m.get_count();
    cout<<"\nData is stored now in the object......"<<endl;
    m.get_num(999);
    cout<<"\nTherefore.... "<<endl;
    m.get_count();
    return 0;
}