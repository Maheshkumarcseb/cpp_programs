//overloading uniary operator using member function
#include<iostream>
using namespace std;
int a=10;
class sample{
    int a;
    public:
    void getdata();
    void display();
};
void display();//non-member function
void sample::getdata()
{
    cout<<"enter value\n";
    cin>>a;
}
void sample ::display()
{
    cout<<"this is member function display\n";
    cout<<"class variable a="<<a<<endl;
    cout<<"global variable a="<<::a<<endl;//::->to access global variable
    ::display();// to access non-member function
}
void display()
{
    cout<<"this is non-member function\n";
    cout<<a;
}
int main()
{
    sample ob;
    ob.getdata();
    ob.display();
    return 0;
}