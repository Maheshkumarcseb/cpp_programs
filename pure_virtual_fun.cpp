#include<iostream>
using namespace std;
class number
{
    protected:
    int val;
    public:
    void setval(int i)
    {
        val=i;
    }
    virtual void show()=0;
};
class hextype:public number{
    public:
    void show()
    {
        cout<<"hextype"<<val<<endl;
    }
};
class octtype:public number{
    public:
    void show()
    {
        cout<<"octtype"<<val<<endl;
    }
};
int main()
{
    hextype h;
    octtype o;
    h.setval(10);
    h.show();
    o.setval(20);
    o.show();
    return 0;
}

