/*
    The user-defined data types include:
    1. Structures
    2. Classes
    3. Unions
    4. enumeration
*/

#include<iostream>
using namespace std;

struct PQR   // 1. Structure in C/C++
{
    int m =12;  // (Default public access)
};

class ABC   // 2. Class in C++
{
    public:  // Access specifier (default private access)
        int a=10;
};

union MNO   // 3. Unions in C++
{
    int z=123;
};

int main()
{
    ABC yep;
    struct PQR pika;
    union MNO sponge;
    cout<<"Structures and Classes -------------"<<endl;
    cout<<"Class ABC contains = "<<yep.a<<endl;
    cout<<"Structure PQR contains = "<<pika.m<<endl;
    cout<<"Union MNO contains = "<<sponge.z<<endl;
    return 0;
}