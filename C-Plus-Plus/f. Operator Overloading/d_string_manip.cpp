#include<iostream>
#include<string.h>

using namespace std;

class String
{
    char *p;
    int len;

    public:
        String();                    // Create null String
        String(const char *s);       //Create String from arrays
        String(const String &s);     //Copy constructor
        ~String(){delete p;}         //Destructor

        //+ operator
        friend String operator+(const String &,const String &);

        //<= operator
        friend int operator<=(const String &,const String &);

        // show
        friend void show(const String);
} ;

String::String(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}

String::String(const String &s)
{   
    cout<<"\n\nCopy constructor called....."<<endl<<endl;
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);
}

//Overloading 

String operator+(const String &s,const String &t)
{
    String temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcpy(temp.p,t.p);
    return temp;
}

//Overloading <=

int operator<=(const String &s,const String &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m <= n)
        return 1;
    else
        return 0;
}

void show(const String s)
{
    cout<<s.p;
}

int main()
{
    String s1("Deep ");
    String s2("Deepraj ");
    String s3("Baidya");

    // String t1,t2,t3;
    // t1=s1;
    // t2=s2;
    // t3=s2+s3;

    // cout<<"\nt1 = ";show(t1);
    // cout<<"\nt1 = ";show(t1);
    // cout<<endl;
    // cout<<"\nt1 = ";show(t1);
    // cout<<endl<<endl;
    // if(t1<=t3)
    // {
    //     show(t1);
    //     cout<<" smaller than ";
    //     show(t3);
    //     cout<<endl;
    // }
    // else
    // {
    //     show(t3);
    //     cout<<" smaller than ";
    //     show(t1);
    //     cout<<endl;
    // }
    return 0;
    
}




