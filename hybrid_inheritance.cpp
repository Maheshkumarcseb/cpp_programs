#include<iostream>
using namespace std;
class shape
{
    public:
    void show();
};
void shape::show()
{
    cout<<"this is a shape\n";
}
class polygon:public shape
{
    public:
    void show();
};
void polygon::show()
{
    cout<<"polygon is a shape\n"<<endl;
}
class triangle:public polygon
{
    public:
    void show();
};
void triangle::show()
{
    cout<<"triangle is a polygon\n";
}
class rectangle:public polygon
{
    public:
    void show();
};
void rectangle::show()
{
    cout<<"rectangle is a polygon\n";
}
class square:public rectangle
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
    shape s1;
    polygon p1;
    triangle t1;
    rectangle r1;
    square sq1;
    s1.show();
    p1.show();
    t1.show();
    r1.show();
    sq1.show();
    return 0;
}



