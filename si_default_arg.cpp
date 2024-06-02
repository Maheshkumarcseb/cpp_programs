#include<iostream>
using namespace std;
float aa(float principle, float rate=5.0, float time=1.0)
{
    return (principle*rate*time)/100.0;
}
int main()
{
    float principle,rate,time;
    cout<<"enter principle ,rate,time";
    cin>>principle>>rate>>time;
    float interest=aa(principle,rate,time);
    float interest2=aa(principle=45,rate=76,time=76);
    cout<<"simple interest"<<interest<<endl;
    cout<<"simple interest"<<interest2<<endl;
    return 0;
}