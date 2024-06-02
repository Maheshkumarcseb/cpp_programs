#include<iostream>
using namespace std;
class x
{
    int a;
    protected:
    int b;
    public:
    int c;
    void abc_x()
    {
        a=1;
        b=2;
        c=3;
    }
    void show_x()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
class y:public x{
    public:
    void abc_y()
    {
        b=20;
        c=30;
      //  show_x();
    }
};
int main()
{
    y ob;
    ob.abc_x();
    ob.show_x();
    ob.abc_y();
    ob.show_x();
    return 0;
}
