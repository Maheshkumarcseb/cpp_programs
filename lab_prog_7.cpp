#include<iostream>
using namespace std;
int main()
{
    double numerator,denominator,divide;
    cout<<"enter numerator";
    cin>>numerator;
    cout<<"enter denominator";
    cin>>denominator;
    try
    {
        {
            if(denominator==0)
            throw 0;
            divide=numerator/denominator;
            cout<<numerator<<"/"<<denominator<<"="<<divide<<endl;
        }
    }
    catch(int num)
    {
        cout<<"error: cannot divide by"<<num<<endl;
    }
    return 0;
    
}