// Program showing member variables and member functions of a class "Student" 
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Student
{
    string name;
    int roll_no;
    float cgpa;
    public:
        void getInfo()  // member function 1
        {
            cout<<"\n\nObject created successfully......"<<endl<<endl;
            cout<<"Enter full name: ";
            getline(cin,name);
            cout<<"Enter roll no. : ";
            cin>>roll_no;
            cout<<"Enter current CGPA: ";
            cin>>cgpa;
        }
        void setInfo()  // member function 2
        {
            cout<<"\n\nStudent details................................"<<endl<<endl;
            cout<<setw(20)<<"Student name: "<<name<<endl;
            cout<<setw(20)<<"Roll number: "<<roll_no<<endl;
            cout<<setw(20)<<"Current CGPA: "<<cgpa<<endl;
            cout<<"---------------------------------------------------"<<endl<<endl;
        }

};

int main()
{
    Student s1;
    s1.getInfo();
    s1.setInfo();
    return 0;
}