#include<iostream>
using namespace std;
int main()
{
    int values[20];
    int n,i,j;
    cout<<"enter the no. of element";
    cin>>n;
    cout<<"enter"<<n<<"values:";
    for(i=0;i<n;i++)
    {
        cin>>values[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<values[i]<<" ";
    }
    cout<<endl;
    //sorting in ascending order
    cout<<"sorting in ascending order"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(values[i]<values[j])
            {
                int temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
            
        }
    }
     for(i=0;i<n;i++)
    {
        cout<<values[i]<<" ";
    }
    cout<<endl;
    //sorting in descending order
    cout<<"sorting in descending order"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(values[i]>values[j])
            {
                int temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
            
        }
    }  
    for(i=0;i<n;i++)
    {
        cout<<values[i]<<" ";
    }
    cout<<endl;
    return 0; 

}