#include<iostream>
using namespace std;
template<class T1=int,class T2=float, class T3=char>
class myclass
{
    public:
    T1 a;
    T2 b;
    T3 c;
    myclass(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is:"<<a<<endl;
        cout<<"the value of b is:"<<b<<endl;
        cout<<"the value of c is:"<<c<<endl;
    }
};
int main()
{
    myclass<> ob(7,6.4,'j');
    ob.display();
    cout<<endl;
    myclass<char,float,int> ob1('k',6.4,87);
    ob1.display();
    return 0;
}