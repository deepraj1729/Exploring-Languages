#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;


void get_strlength(const char *arr[],int size)
{
    cout<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<"arr["<<i<<"] = "<<setw(10)<<*(arr +i)<<"  length = "<<strlen(*(arr +i))<<endl;
    }
    cout<<endl;
}

int main()
{
    const char *array[] = {"Alex","Davidson","Aplherd","Thomas","Samuel","Taylor"};
    int size = sizeof(array)/sizeof(array[0]);
    get_strlength(array,size);
    return 0;
}
