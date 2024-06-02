#include<iostream>
using namespace std;
int main()
{
    int n=5,isum=0,i;
    cout<<"enter the value of n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        isum+=i;
    }
    cout<<"sum of 1 to "<<n<<"is :"<<isum<<endl;
    cout<<"sum of 1 t0 "<<n<<"using formula is "<<(n*(n+1)/2)<<endl;
    return 0;
}