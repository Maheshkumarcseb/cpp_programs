#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1, 73, 4, 2, 54, 3};
    // sort(arr,arr+6);   //sorting in ascending order
    sort(arr,arr+6,greater<int>());   // sorting in descending order
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}