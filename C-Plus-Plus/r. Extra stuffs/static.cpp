#include<iostream>

using namespace std;

int main()
{
    static int a;
    int *ptr;
    a = 10;
    ptr = &a;
    cout<<"*ptr = "<<*(ptr+1)<<endl;
    cout<<"Address of ptr = "<<ptr+1<<endl;
    return 0;
}