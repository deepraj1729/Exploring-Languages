#include<iostream>
using namespace std;
#define max_size 30

int main()
{
    int size,arr[max_size];
    cout<<"\nThis is the introduction to arrays in C++ ------------"<<endl;
    cout<<"\nEnter the size of array you want to store: ";
    cin>>size;
    cout<<"\nEnter "<<size<<" numbers in the array-------------------"<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter value in arr["<<i<<"] : ";
        cin>>arr[i];
    }

    cout<<"\nEntered numbers in the array are----------------------"<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}