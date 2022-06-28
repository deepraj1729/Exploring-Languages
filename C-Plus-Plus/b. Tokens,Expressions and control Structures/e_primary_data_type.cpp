/*  primary Data type                Size (in bytes)

    char                          1     
    unsigned char                 1
    signed char                   1
    int                           4
    signed int                    4
    unsigned int                  4
    short int                     2
    unsigned short int            2
    signed short int              2
    long int                      4
    unsigned long int             4
    signed long int               4
    long long int                 8
    unsigned long long int        8
    signed long long int          8
    float                         4
    double                        8
    long double                   16

    //  Boolean datatypes: --------------------------------------- 
    true                          1
    False                         1

    //other primary datatypes: -------------------------

    void 
    wide character 

*/

#include<iostream>
using namespace std;

int main()
{

    cout<<"\n\n---------------Size of data types in C++ standard in my compiler (mingw)------------------"<<endl;
    cout<<"\nsize of char: "<<sizeof(char)<<endl;
    cout<<"\nsize of unsigned char: "<<sizeof(unsigned char)<<endl;
    cout<<"\nsize of signed char: "<<sizeof(signed char)<<endl;
    cout<<"\nsize of int: "<<sizeof(int)<<endl;
    cout<<"\nsize of signed int: "<<sizeof(signed int)<<endl;
    cout<<"\nsize of unsigned int: "<<sizeof(unsigned int)<<endl;
    cout<<"\nsize of short int: "<<sizeof(short int)<<endl;
    cout<<"\nsize of unsigned short int: "<<sizeof(unsigned short int)<<endl;
    cout<<"\nsize of signed short int: "<<sizeof(signed short int)<<endl;
    cout<<"\nsize of long int: "<<sizeof(long int)<<endl;
    cout<<"\nsize of unsigned long int: "<<sizeof(unsigned long int)<<endl;
    cout<<"\nsize of signed long int: "<<sizeof(signed long int)<<endl;
    cout<<"\nsize of long long int: "<<sizeof(long long int)<<endl;
    cout<<"\nsize of signed long long int: "<<sizeof(signed long long int)<<endl;
    cout<<"\nsize of unsigned long long int: "<<sizeof(unsigned long long int)<<endl;
    cout<<"\nsize of float: "<<sizeof(float)<<endl;
    cout<<"\nsize of double: "<<sizeof(double)<<endl;
    cout<<"\nsize of long double: "<<sizeof(long double)<<endl;
    cout<<"\nsize of Boolean \"true\": "<<sizeof(true)<<endl;
    cout<<"\nsize of Boolean \"false\": "<<sizeof(false)<<endl;
    return 0;
}
