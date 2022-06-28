#include<iostream>
using namespace std;
#include<string.h>
#include<ctype.h>
int main()
{
    
    //char *ptr[]= {"books","television","computer","sports"};  // forbidden by ISO C++ (converting string const to char* forbidden)
    const char *ptr[]= {"books","television","computer","sports"};  // Allowed by ISO C++ (converting string const to const char* )
    char str[25];
    int i=0;
    cout<<"\n\n\nEnter your favourite leisure pursuit: ";
    cin>>str;
    for(i=0;i<4;i++)
    {
        if(!strcmp(str,ptr[i]))
        {
            cout<<"You favourite pursuit is available here"<<endl;
            break;
        }
        
    }
    if(i ==4)
    {
        cout<<"Your favourite puruit is not available here"<<endl;
    }
    return 0;
}