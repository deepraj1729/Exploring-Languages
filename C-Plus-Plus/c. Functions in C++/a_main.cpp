/* 
    Every C/C++ program must have a "main" function

    Program execution begins from "main" function 
*/

#include<iostream>
using namespace std;

int main()
{
    static int a =10; 
    cout<<"Main function executed"<<endl;

    while(a>0)  // calling main() 10 times
    {
        cout<<"a = "<<a<<endl;
        a--;
        main();
    }

    return(0);
}