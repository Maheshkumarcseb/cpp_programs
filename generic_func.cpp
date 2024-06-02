#include<iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout<<"overloaded display 1 "<<x<<endl;
}
template <class T1,class T2>
void display(T1 x,T2 y)
{
    cout<<"overloded display 2 "<<x<<endl<<y<<endl;
}
void display(int x)
{
    cout<<"explicit display "<<x<<endl;
}
int main()
{
    display(100);
    display(20.34);
    display(100,20.34);
    display('c');
    return 0;
}
