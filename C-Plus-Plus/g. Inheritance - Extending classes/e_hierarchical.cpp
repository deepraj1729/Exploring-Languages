#include<iostream>
#include<string>
#include<cmath>
#define pi 3.14
using namespace std;

class Volume
{
    public:
        double volume(float,float);                 //Cylinder
        double volume(float);                       //Cube
        int volume(int,int,int);                    //Cuboid
        double volume(char,float);                  //Sphere
        double volume(char,float,float,float);      //Frustum
};

double Volume::volume(float r,float h)                           //Cylinder
{
    return pi*pow(r,2)*h;
}

double Volume::volume(float side)                                //Cube
{
    return pow(side,3);
}

int Volume::volume(int l,int b,int h)                            //Cuboid
{
    return l*b*h;
}

double Volume::volume(char shape,float r)              //Sphere
{
    return (4/3)*pi*pow(r,3);
}

double Volume::volume(char shape,float r,float R,float h)      //Frustum
{
    return (1/3)*pi*h*(pow(r,2)+R*r+pow(R,2));
}


class Cylinder:public Volume                            
{
    public:
        void calc_volume(float r,float h)
        {
            cout<<"\n\nFor Cylinder"<<endl;
            cout<<"Radius(r) = "<<r<<endl;
            cout<<"Height(h) = "<<h<<endl;
            cout<<"volume of Cylinder = "<<volume(r,h)<<endl;
        }
};

class Cube:public Volume
{
    public:
        void calc_volume(float side)
        {
            cout<<"\n\nFor Cube"<<endl;
            cout<<"Side(a) = "<<side<<endl;
            cout<<"volume of Cube = "<<volume(side)<<endl;
        }
};

class Cuboid:public Volume
{
    public:
        void calc_volume(int l,int b,int h)
        {
            cout<<"\n\nFor SCuboid"<<endl;
            cout<<"Length(l) = "<<l<<endl;
            cout<<"Breadth(b) = "<<b<<endl;
            cout<<"Height(h) = "<<h<<endl;
            cout<<"volume of Cuboid = "<<volume(l,b,h)<<endl;
        }
};

class Sphere:public Volume
{
    public:
        void calc_volume(char shape,float r)
        {
            cout<<"\n\nFor Sphere"<<endl;
            cout<<"Radius(r) = "<<r<<endl;
            cout<<"volume of Sphere = "<<volume(shape,r)<<endl;
        }
};

class Frustum:public Volume
{
    public:
        void calc_volume(char shape,float r,float R,float h)
        {
            cout<<"\n\nFor Frustum"<<endl;
            cout<<"\n\nSmaller radius(r) = "<<r<<endl;
            cout<<"Larger radius(R) = "<<R<<endl;
            cout<<"Height(h) = "<<h<<endl;
            cout<<"volume of Sphere = "<<volume(shape,r,R,h)<<endl;
        }
};

int main()
{
    Cylinder c1;
    Cube c2;
    Cuboid c3;
    Sphere s4;
    Frustum f5;
    c1.calc_volume(10,21);
    c2.calc_volume(10);
    c3.calc_volume(10,12,15);
    s4.calc_volume('s',7);
    f5.calc_volume('f',3,6,4.8);
    return 0;
}


                                                                                                                                                                                                                                                                                                             