#include<iostream>
using namespace std;
namespace mynamespace
{
    int i;
    float j;
}
using namespace mynamespace;
int main()
{
    cout<<"enter the value";
    cin>>i>>j;
    cout<<"value of i and j:\n"<<i<<endl<<j<<endl;
    return 0;
}