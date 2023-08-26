#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={3,1,4,1,5};
    vec[0]=4;
    try
    {
        vec.at(5)=9;     
    }
    catch(...)
    {
        cout<<"out-of-bound exception captured\n";
    }
    return 0;
    
}