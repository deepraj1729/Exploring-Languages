#include<iostream>
using namespace std;

void disp_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }
    cout<<endl;
}

void disp_pointer(int *p,int size)
{
    for(int i = 0;i<size;i++)
    {
        cout<<"*(p + "<<i<<") = "<<*(p+i)<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[] = {12,23,45,78,99,554};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    disp_array(arr,size);

    disp_pointer(ptr,size);

}