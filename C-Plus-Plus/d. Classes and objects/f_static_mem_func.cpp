#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
    public:
        void setCode()
        {
            code = ++count;
        }
        void showCode()
        {
            cout<<"Object number: "<<code<<endl;
        }

        static void showCount(void)
        {
            cout<<"count: "<<count<<endl;
        }
};

int test::count;  // static member variable definition

int main()
{
    test t1,t2;

    t1.setCode();
    test::showCount();  // accessing static function (done without objects)

    t2.setCode();
    test::showCount();  // accessing static function (done without objects)

    // test::showCode(); this is not allowed as every non static member function is connected to a certain object of that class
    
    test t3;
    t3.setCode();

    test::showCount();  // accessing static function (done without objects)

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}