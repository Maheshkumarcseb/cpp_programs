#include<iostream>
using namespace std;
class myclass
{
    int id;
    public:
    myclass()
    {
        cout<<"default constructor\n";
    }
    myclass(int a)
    {
        id=a;
        cout<<"parametrized constructor\n";
    }
    myclass(myclass &x)
    {
        cout<<"copy constructor\n";
        id=x.id;
    }
    void display()
    {
        cout<<id;
    }
};
int main()
{
    myclass A(100);
    myclass B(A);
    myclass C=A;
    myclass D;
    D=A;
    cout<<"\n id of a=";
    A.display();
    cout<<"\n id of b=";
    B.display();
    cout<<"\n id 0f c=";
    C.display();
    cout<<"\n id of d=";
    D.display(); 
}