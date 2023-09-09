// program for hybrid inheritance
#include<iostream>
using namespace std;
class shape   // base class shape
{
    public:
    void show();
};
void shape::show()   //member function of class shape defined outside
{
    cout<<"this is a shape\n";
}
class polygon:public shape  //class polygon derived from class shape
{
    public:
    void show();
};
void polygon::show()
{
    cout<<"polygon is a shape\n"<<endl;
}
class triangle:public polygon  //class triangle derived from class polygon
{
    public:
    void show();
};
void triangle::show()    // member function of triangle class defined outside
{
    cout<<"triangle is a polygon\n";
}
class rectangle:public polygon     //class rectangle derived from polygon
{
    public:
    void show();
};
void rectangle::show()
{
    cout<<"rectangle is a polygon\n";
}
class square:public rectangle    //class square derived from rectangle 
{
    public:
    void show();
};
void square::show()
{
    cout<<"square is arectangle\n";
}
int main()
{
    shape s1;  // s1 object for class shape
    polygon p1;
    triangle t1;
    rectangle r1;
    square sq1;
    s1.show(); //calling show() using object of shape class
    p1.show();
    t1.show();
    r1.show();
    sq1.show();
    return 0;
}



