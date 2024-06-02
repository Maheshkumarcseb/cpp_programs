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
        cout<<a<<endl<<b<<endl<<c;
    }
};
class y:private x
{
    public:
    void abc_y()
    {
        abc_x();
        b=20;
        c=30;
        show_x();
    }
};
int main()
{
    y ob;
    ob.abc_y();
    return 0;
}