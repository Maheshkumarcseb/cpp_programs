//program for namespace 
#include<iostream>
using namespace std;
namespace one
{
    int m=5,n=6;
}
namespace two
{
    int m=10;
    float p=22.2;
}
int main()
{
    cout<<"value of m in namespace one:"<<one::m<<endl;
    cout<<"value of m in nmaespace two:"<<two::m<<endl;
    cout<<"value of n in namespace one:"<<one::n<<endl;
    cout<<"value of p in nmaespace two:"<<two::p<<endl;
    return 0;
}