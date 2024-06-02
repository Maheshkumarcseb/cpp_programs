#include<bits/stdc++.h>
using namespace std;
class mystatic
{
    public:
    static int a;
    static void myfunc(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"this is static a:"<<a<<endl;
    }
};
int mystatic::a;
int main()
{
    cout<<"initial value of a is"<<mystatic::a<<endl;
    mystatic::a=32;
    cout<<"this is the value of a :"<<mystatic::a<<endl;
    mystatic m1;
    m1.show();
    mystatic::myfunc(100);
    m1.show();
    mystatic m2;
    m2.myfunc(300);
    m1.show();
    m2.show();
    return 0;
}