#include<iostream>
using namespace std;
float value(float p,int t,float r=0.15);
void printline(char ch='*',int len=40);
int main()
{
    float amount;
    printline();
    amount=value(5000,5);
    cout<<"amount="<<amount<<endl;
    amount=value(1000,5,0.30);
    cout<<"amount="<<amount<<endl;
    printline('=');
    return 0;
}
float value(float p,int t,float r)
{
    float si;
    si=(p*r*t)/100;
    return si;
}
void printline(char ch,int len)
{
    for(int i=1;i<=len;i++)
    cout<<i<<" ";
    cout<<endl;
}