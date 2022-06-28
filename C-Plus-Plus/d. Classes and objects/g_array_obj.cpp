#include<iostream>
#include<string>
using namespace std;

class employee
{
    char name[30];
    float age;
    public:
        void getdata();
        void putdata();
};

void employee::getdata()
{
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nEnter age: ";
    cin>>age;
    cout<<endl;
}

void employee::putdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl<<endl;
}

const int sz = 3;
int main()
{       
    employee manager[sz];
    for(int i=0;i<sz;i++)
    {
        cout<<"\nDetails of manager "<<i+1<<endl;
        manager[i].getdata();
    }

    cout<<endl<<endl;

    for(int i=0;i<sz;i++)
    {
        cout<<"\nManager "<<i+1<<endl;
        manager[i].putdata();
    }
    return 0;
}
