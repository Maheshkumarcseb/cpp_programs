#include<iostream>
using namespace std;
class base1
{
    protected:
    int i;
    public:
    base1(int x)
    {
        i=x;
        cout<<"constructing base 1\n";
    }
    ~base1()
    {
        cout<<"destructing base1\n";
    }
};
class base2
{
    protected:
    int j;
    public:
    base2(int x)
    {
        j=x;
        cout<<"constructing base 2\n";
    }
    ~base2()
    {
        cout<<"destructing base 2\n";
    }
};
class derived :public base1,public base2{
    int k;
    public:
    derived(int x,int y,int z):base1(y),base2(z)
    {
        k=x;
        cout<<"constructing derived\n";
    }
    ~derived()
    {
        cout<<"destucting derived \n";
    }
    void show()
    {
        cout<<i<<endl<<j<<endl<<j<<endl;
    }
};
int main()
{
    derived ob(1,9,5);
    ob.show();
    return 0; 
}