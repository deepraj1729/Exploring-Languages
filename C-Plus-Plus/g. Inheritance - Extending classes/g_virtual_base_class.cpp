/*
    A virtual base class occurs when a base class (say Grandparent) is inherited by two or more intermediate classes (parent of their child)
    and then followed by a common derived class.In this situation,the member functions of the grandparent is being inherited twice to the final 
    derived class (child).This gives a compile time error.

    To remove this error the base class is inherited as a virtual class as :

    class Base
    {
        //body
    };

    class intermediate1: virtual public Base
    {
        //body
    };

    class intermediate2: virtual public Base
    {
        //body
    };

    class Derived:public intermediate1,intermediate2
    {
        //body  
    };

*/

#include<iostream>
#include<string>

using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void get_number(int a)
        {
            roll_no = a;
        }
        void put_number()
        {
            cout<<"Roll no: "<<roll_no<<endl;
        }
};

class Test:virtual public Student
{
    protected:
        float part1,part2;
    public:
        void get_marks(float x,float y)
        {
            part1 =x;
            part2 =y;
        }
        void put_marks()
        {
            cout<<"Marks Obtained:"<<endl;
            cout<<"Part1= "<<part1<<endl;
            cout<<"Part2 = "<<part2<<endl;
        }
};

class Sports:virtual public Student
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score()
        {
            cout<<"Sport wt: "<<score<<endl;
        }
};


class Result:public Test,public Sports
{
    float total;
    public:
        void display();
};

void Result::display()
{
    total = part1+part2+score;
    put_number();                 // Compilation error: Redundant function if Student class wasn't inherited as virtual class
    put_marks();
    put_score();
    cout<<"Total score: "<<total<<endl;
}



int main()
{
    Result stud1;
    stud1.get_number(39);
    stud1.get_marks(35,39.5);
    stud1.get_score(17.5);
    stud1.display();

    return 0;
}