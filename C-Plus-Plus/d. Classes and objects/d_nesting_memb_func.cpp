#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Bank_details
{
    string name,userid;
    int pin_no;
    double balance =0;
    public:
        void login();
        void deposit();
        void withdraw();
        double check_bal();
        void disp_info();
};

void Bank_details::login()
{
    cout<<"\n\nWelcome to C++ Bank of India (XD)..................."<<endl<<endl;
    cout<<"Enter your full name: ";
    getline(cin,name);
    cout<<"Enter UserId: ";
    getline(cin,userid);
    cout<<"Enter bank pin number: ";
    cin>>pin_no;
    cout<<"User Logged in successfully...."<<endl<<endl;

}

void Bank_details::deposit()
{
    double money;
    cout<<"\n\nEnter your amount to be deposited: ";
    cin>>money;

    if(money+check_bal() > 100000) // used nested function
    {
        cout<<"\nMoney is too large to deposit...Try small deposits"<<endl;
        deposit();
    }
    else
    {
        balance+=money;
        cout<<"You deposited an amount of Rs "<<money<<" successfully.........."<<endl;
    }
    
}

void Bank_details::withdraw()
{
    double money;
    cout<<"\n\nEnter your amount to be withdrawn from your available balance of Rs "<<check_bal()<<"  : ";
    cin>>money;

    if(money>check_bal())
    {
        cout<<"\nWarning!!!Money exceeds your account balance...Sorry money can't be withdrawn....."<<endl<<endl;
        withdraw();
    }
    else
    {
        balance-=money;
        cout<<"\nYou just withdrawn an amount of Rs "<<money<<" successfully........"<<endl;
        cout<<"Available balance = Rs "<<check_bal()<<endl;
    }
    
}

double Bank_details::check_bal()
{
    // int bal =balance;
    return balance;    // Not an important function as we can access balance using variable "balance" (just used to show nesting member function)
}

void Bank_details::disp_info()
{
    cout<<"\n\nYour Account details..............................."<<endl<<endl;
    cout<<setw(30)<<"Bank Account name: "<<"C++ Bank of India"<<endl;
    cout<<setw(30)<<"Full name: "<<name<<endl;
    cout<<setw(30)<<"Account balance: "<<check_bal()<<endl<<endl;
}

int main()
{
    Bank_details emp1;
    emp1.login();
    emp1.disp_info();
    emp1.deposit();
    emp1.disp_info();
    emp1.withdraw();
    emp1.disp_info();
    return 0;
}