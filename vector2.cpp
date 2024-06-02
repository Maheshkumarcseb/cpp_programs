#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout<<"displaying the vector";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> vec1;
    //  display(vec1);
    vector<int> vec2(4);
    // display(vec2);
    vector<int> vec3(vec2);
    //  display(vec3);
    vector<int> vec4(6,19);
    display(vec4);
    cout<<vec4.size();
    return 0;
}