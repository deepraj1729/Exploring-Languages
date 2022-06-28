#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Bank
{
    protected:
        string bname = "C++ Bank of India";
        string branch = "San Fransisco";
        string country = "USA";
        double principal;
        int time;
        double rate;
        void get_details();

    public:
        Bank(){ cout<<"\nBank constructor called"<<endl;}
        void cal_compound(double money,double roi,int y)
        {   
            principal = money;
            time = y;
            rate = roi;
            cout<<"\n\nCompound Interest------------------"<<endl;
            cout<<"\nPrincipal = "<<principal<<endl;
            cout<<"Year = "<<time<<endl;
            cout<<"Rate of interest = "<<rate<<endl;
            //---------------------------------------
            double ci = principal*(pow((1+(rate/100)),time)-1);
            cout<<"\nCompound interest = "<<ci<<endl<<endl;
        }

        void cal_simple(double money,double roi,int y)
        {   
            principal = money;
            time = y;
            rate = roi;
            cout<<"\n\nSimple Interest---------------------"<<endl;
            cout<<"\nPrincipal = "<<principal<<endl;
            cout<<"Year = "<<time<<endl;
            cout<<"Rate of interest = "<<rate<<endl;
            //---------------------------------------
            double si = (principal*rate*time)/100;
            cout<<"\nSimple interest = "<<si<<endl<<endl;
        }

        void show_bank_details()
        {
            cout<<"\n\nBank name: "<<bname<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Country: "<<country<<endl<<endl;
        }

};

class Customer: private Bank
{
    string name;
    double bal;
    int year;
    string bankname = bname;  // accessible as bname is protected in the base class hence private in the derived class
    public:
        Customer(){cout<<"\nCustomer Constructor called"<<endl;}
        void create_account(string fn,double deposit)
        {
            name = fn;
            bal = deposit;
            cout<<"Account created"<<endl;
        }

        void check_interest()
        {
            cal_simple(2500,15,12);
            cal_compound(2500,15,12);
        }

        void customer_details()
        {
            show_bank_details();
            cout<<"Customer name: "<<name<<endl;
            cout<<"Bank Name: "<<bankname<<"  and bname = "<<bname<<endl;
            cout<<"Balance: "<<bal<<endl;
        }
};

int main()
{
    Customer c1;
    c1.create_account("Deepraj Baidya",90000);
    c1.customer_details();
    c1.check_interest();
}