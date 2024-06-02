#include<iostream>
using namespace std;
class convert
{
    protected:
    double val1,val2;
    public:
    convert(double i)
    {
        val1=i;

    }
    double getconv()
    {
        return val2;
    }
    double getinit()
    {
        return val1;
    }
    virtual void compute()=0;
};
class litgal:public convert
{
    public:
    litgal(double i):convert(i)
    {
    }
    void compute()
    {
        val2=val1/3.78;
    }
};
int main()
{
    convert *p;
    litgal lg(4);
    p=&lg;
    cout<<p->getinit()<<"liter is";
    p->compute();
    cout<<p->getconv()<<"galon";
    return 0;
}
