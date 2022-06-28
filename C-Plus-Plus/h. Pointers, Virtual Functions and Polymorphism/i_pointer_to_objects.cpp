#include<iostream>
using namespace std;

class item
{
        int code;
        float price;
    public:
        void getdata(int a,float b)
        {
            code=a;
            price = b;
        }

        void show()
        {
            cout<<"Code = "<<code<<endl;
            cout<<"Price = "<<price<<endl;
        }
};

const int sizes = 2;

int main()
{
    item *p = new item[sizes];
    item *d = p;
    float y;
    int x,i;

    for(i =0;i<sizes;i++)
    {
        cout<<"Input code and price for item "<<i+1<<" ";
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }

    for(i=0;i<sizes;i++)
    {
        cout<<"\n\nItem: "<<i+1<<endl;
        d->show();
        d++;
    }

    return 0;
}