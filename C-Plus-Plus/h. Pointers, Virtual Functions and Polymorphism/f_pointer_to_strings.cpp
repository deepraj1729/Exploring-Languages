#include<iostream>
#include<string>
using namespace std;

void disp_char_array(char text[],int size)
{
    cout<<"Text: ";
    for(int i=0;i<size;i++)
    {
        cout<<text[i];
    }
    cout<<endl;
}

void disp_char_pointer(char *p,int size)
{
    cout<<"Pointer Text: ";
    for(int i=0;i<size;i++)
    {
        cout<<*(p+i);
    }
    cout<<endl;
}

int main()
{   
    char *ptr;
    char name[] = "Deepraj";
    int size = sizeof(name)/sizeof(name[0]);   // Can be neglected and instead check for condition '\0' at the end of array sequence

    ptr = name;  // In case of char pointer reference to char arrays '&' is not required
    disp_char_array(name,size);
    disp_char_pointer(ptr,size);
    return 0;
}