
// program for diving a number by zero
#include<iostream>
using namespace std;
int main()
{
    double numerator,denominator,divide;
    cout<<"enter numerator";
    cin>>numerator;                   //enter the value of numerator
    cout<<"enter denominator";
    cin>>denominator;                  //enter the value of denominator
    try
    {
        {
            if(denominator==0)   // checking the condition. if this statement is true, control will transfer to throw statement otherwise,to divide statement
            throw 0;   // this will transfer control to catch block
            divide=numerator/denominator;
            cout<<numerator<<"/"<<denominator<<"="<<divide<<endl;
        }
    }
    catch(int num)              // num is the parameter i.e. which type of value we are accepting 
    {
        cout<<"error: cannot divide by"<<num<<endl;
    }
    return 0;
    
}
