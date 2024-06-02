#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
    return x*y;
}
inline double div(double x,double y)
{
    return x/y;
}
int main()
{
    float a=22.14;
    float b=44.5;
    cout<<"product="<<mul(a,b)<<endl;
    cout<<"division="<<div(a,b)<<endl;
    return 0;
}
