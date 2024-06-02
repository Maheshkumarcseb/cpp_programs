#include<iostream>
using namespace std;
template <class T1,class T2>
class test
{
    T1 a;
    T2 b;
    public:
    test(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }
};
int main()
{
    cout<<"instantiating test 1 with float and int\n";
    test<float,int> Test1(22.11,43);
    Test1.show();
    cout<<"instantiating test 2 with int and char\n";
    test<int,char> Test2(100,'w');
    Test2.show();
    return 0;
}