#include<iostream>
#include<string>
using namespace std;

class Bank
{
    long int acc_no;
    string name,branch;
    int pin,cvv;
    double bal = 0;
        bool checkCredentials();                     // Internal by bank
    public:
        void setCredentials();                       // User
        void withdraw();                             // User
        void deposit();                              // User
        double checkBalance();                       // User
        friend void Transfer(Bank&,Bank&);           // User
        friend bool User_exist(Bank,long int);       // Internal by Bank
        void Show_data();                            // User
};

void Bank::setCredentials()
{
    cout<<"\nWelcome to C++ Bank of India......"<<endl<<endl;
    cout<<"Set your credentials here "<<endl;
    cout<<"Enter your name: ";
    fflush(stdin);
    getline(cin,name);
    cout<<"Enter account number: ";
    cin>>acc_no;
    cout<<"Enter your Branch name: ";
    fflush(stdin);
    getline(cin,branch);
    cout<<"Enter CVV number: ";
    cin>>cvv;
    cout<<"Set a 4 digit PIN: ";
    cin>>pin;
}

bool Bank::checkCredentials()
{
    int data;
    cout<<"Enter either your CVV number or 4 digit PIN number: ";
    cin>>data;

    if(data == cvv)
    {
        cout<<"Credentials matched....."<<endl;
        return 1;
    }
    else if(data == pin)
    {
        cout<<"Credentials matched....."<<endl;
        return 1;
    }    
    else
    {
        cout<<"\nOoops!! Credentials didn't matched...Try again.."<<endl;
        return 0;
    }
}

double Bank::checkBalance()
{
    cout<<name<<"\'s current balance is Rs "<<bal<<endl;
    return bal;
}


void Bank::deposit()
{
    double money;
    cout<<"\n\nEnter your amount to be deposited: ";
    cin>>money;

    if(money+bal > 100000) // used nested function
    {
        cout<<"\nMoney is too large to deposit...Try small deposits"<<endl;
        deposit();
    }
    else
    {
        bal+=money;
        cout<<"\nYou deposited an amount of Rs "<<money<<" successfully.........."<<endl;
    }
}


void Bank::withdraw()
{
    double money;
    cout<<"\n\nEnter your amount to be withdrawn from your available balance of Rs "<<bal<<"  : ";
    cin>>money;

    if(money>bal)
    {
        cout<<"\nWarning!!!Money exceeds your account balance...Sorry, the amount can't be withdrawn....."<<endl<<endl;
        withdraw();
    }
    else
    {
        bal-=money;
        cout<<"\nYou just withdrawn an amount of Rs "<<money<<" successfully........"<<endl;
        checkBalance();
    }
}

bool User_exist(Bank obj,long int ac_no)
{
    if(obj.acc_no == ac_no)
        return 1;
    else 
        return 0;
}

void Transfer(Bank& u1, Bank& u2)
{
    double amt;
    if(User_exist(u1,u2.acc_no)==1);
    {
        cout<<"\n"<<u1.name<<", plz enter the amount you want to transfer from your account ";
        cin>>amt;
        if(amt>u1.bal)
        {
            cout<<"The Transfer of Rs "<<amt<<" is not possible...Amount exceeds your balance."<<endl;
            Transfer(u1,u2);
        }
        else
        {
            u1.bal-=amt;
            u2.bal+=amt;
            cout<<"Amount of Rs "<<amt<<" was successfully transferred to the account no. "<<u2.acc_no<<endl;
        } 
    }
}

void Bank::Show_data()
{
    cout<<"\n\nName: "<<name<<endl;
    cout<<"Account number: "<<acc_no<<endl;
    cout<<"Branch name: "<<branch<<endl<<endl;
}

int main()
{
    Bank User1,User2;
    // User1 
    cout<<"\n................User1................"<<endl<<endl;
    User1.setCredentials();
    User1.Show_data();
    User1.deposit();
    User1.checkBalance();

    // User2
    cout<<"\n................User2................"<<endl<<endl;
    User2.setCredentials();
    User2.Show_data();
    User2.checkBalance();

    // Transferring money from User1's Account to User2's Account
    cout<<"\n\nBefore transferring................."<<endl<<endl;
    User1.checkBalance();
    User2.checkBalance();
    Transfer(User1,User2);
    cout<<"\n\nAfter transferring.................."<<endl<<endl;
    User1.checkBalance();
    User2.checkBalance();

    return 0;
}