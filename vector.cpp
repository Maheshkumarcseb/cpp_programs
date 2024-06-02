#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i< v.size();i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    int element,size;
    cout<<"enetr the size of the vector: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter an element to add in this vector: ";
        cin>>element;
        vec1.push_back(element);   //add the element to vector
    }
    // vec1.pop_back();   // remove the last element from vector
    display(vec1);
    // vector<int> ::iterator iter=vec1.begin();
    // vec1.insert(iter,483);
    // vec1.insert(iter+1,483);
    // vec1.insert(iter+1,5,483);
    // display(vec1);
    return 0;
}