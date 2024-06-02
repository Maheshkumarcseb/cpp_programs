#include<iostream>
using namespace std;
void neg(int &i);
int main()
{
    int x=20;
    cout<<x<<endl;
    neg(x);
    cout<<"after calling function\n";
    cout<<x<<endl;
    return 0;
}
void neg(int &i)
{
    i=-i;
}