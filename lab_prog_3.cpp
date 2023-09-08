//swap two number
#include<iostream>
using namespace std;
int swap(int&,int&);
int main()
{
    int num1,num2;
    cout<<"enter two number";
    cin>>num1>>num2;
    cout<<"value before swapping are "<<num1<<endl<<num2<<endl;
    swap(num1,num2);
    cout<<"value after swapping are "<<num1<<endl<<num2<<endl;
    return 0;
}
int swap(int &p,int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}
