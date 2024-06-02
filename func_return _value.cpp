#include<iostream>
using namespace std;
int & maximum(int &a,int &b)
{
    return(a>b)?a:b;
    //return c;
}
int main()
{
    int p=10,q=5;
    int & r = maximum(p,q);
    cout<<"maximum of p and q is "<<r;
    return 0;
}