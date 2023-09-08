//program for static data member and static function
#include<iostream>
using namespace std;
class mystatic
{
    public:
    static int a;      //static data member
    static void myfunc(int x)    //static member function
    {
        a=x;
    }
    void show()
    {
        cout<<"this is static a:"<<a<<endl;
    }
};
int mystatic::a;      //global declaration
int main()
{
    cout<<"initial value of a:"<<mystatic::a<<endl;       //printing the value of a without object
    mystatic::a=22;                      //assigning the value of a without object
    cout<<"this is value of a:"<<mystatic::a<<endl;
    mystatic m1;                  //creating object
    m1.show();
    mystatic::myfunc(100);         //calling function without object 
    m1.show();
    mystatic m2;
    m2.myfunc(300);        //calling myfunc with the help of object and passing the value 300 to the function
    m1.show();
    m2.show();             //calling show function,it will display the value of a
    return 0;
}