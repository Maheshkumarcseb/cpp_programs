#include<iostream>

using namespace std;

class A
{
    int a;
    float b;
    public:
    A()    //default constructor
    {
        a=0;
        b=0;
    }
    A(int x,float y)     //parametrized constructor
    {
        a=x;
        b=y;
    }
    void display()     //member function 
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void operator=(A ob)               // overloaded '=' operator
    {
        a=ob.a;
        b=ob.b;
    }
};
int main()
{
    A obj(10,20);   //creating object of parametrized constructor
    A obj1;         //creating object of default constructor
    obj1=obj;            //assigning the value of obj into obj1
    obj1.display();
    obj.display();
    return 0;
}