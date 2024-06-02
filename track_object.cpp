//pogram for keep tracking of no. of object created
#include<iostream>
using namespace std;
class counter 
{
    public:
    static int count;
    counter()   //constructor
    {
        count++;
    }
    ~counter()  //destructor
    {
        count--;
    }
};
int counter::count;
void f()
{
counter temp;
cout<<"object in existance"<<endl;
cout<<"counter::count<<endl";
}
int main()
{
    counter ob1;
    cout<<"object in existance\n";
    cout<<counter::count<<endl;
    counter ob2;
    cout<<"object in existance<<endl";
    cout<<counter::count<<endl;
    f();
    cout<<"object in existance";
    cout<<counter::count<<endl;
    return 0;
}