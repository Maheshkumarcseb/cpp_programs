#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"this is base display\n";
    }
};
class derived1:public base
{
    public:
    void dislay()
    {
        cout<<"this is derived1 display\n";
    }
};
class derived2:public base{
    public:
    void display()
    {
        cout<<"this is derived2 display\n";
    }
};
int main()
{
    base ob1;
    derived1 ob2;
    derived2 ob3;
    base &a=ob1;
    a.display();
    base &b=ob2;
    b.display();
    base &c=ob3;
    c.display();
    return 0;
}