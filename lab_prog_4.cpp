#include<iostream>
using namespace std;
void add(int ,int);//function overloading
void add(double ,double);
int main()
{
    int num1,num2;
    double d1,d2;
    cout<<"enter 2 integer value\n";
    cin>>num1>>num2;
    cout<<"enter two double value";
    cin>>d1>>d2;
    add(num1,num2);
    add(d1,d2);
    return 0;
}    
void add(int p,int q)
{
    int sum;
    sum=p+q;
    cout<<"integer addition "<<sum<<endl;
}
void add(double p,double q)
{
    double sum;
    sum=p+q;
    cout<<"double value addition "<<sum<<endl;
}
