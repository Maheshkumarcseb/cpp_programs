// #include <iostream>
// #include <list>
// using namespace std;
// void display(list<int> &lst)
// {
//     list<int>:: iterator it;
//     for(it=lst.begin(); it!=lst.end();it++)
//     {
//         cout<<*it<<" ";
//     }
// }
// int main()
// {
//     list<int> list1; // empty list of length 0
//     list1.push_back(5);
//     list1.push_back(57);
//     list1.push_back(6);
//     list1.push_back(65);
//     list1.push_back(54);
//     display(list1);
//     // iter=list1.begin();
//     // list<int>::iterator iter;
//     // iter=list1.begin();
//     // cout << *iter;
//     // iter++;
//     // cout << *iter;

//     return 0;
// }

#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>:: iterator it;
    for(it=lst.begin(); it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1(3);
    list<int>::iterator ite;
    ite=list1.begin();
   *ite=56;
    ite++;
    *ite=78;
    ite++;
    *ite=23;
    ite++;
    list<int> list2(3);
    list<int>::iterator iter;
    iter=list2.begin();
   *iter=43;
    iter++;
    *iter=4;
    iter++;
    *iter=42;
    iter++;
    // list2.pop_back();
// list2.pop_front();
// list2.remove(4);    //removing element from list
//   list2.sort();
//   list1.reverse();
    display(list2);
    list1.merge(list2);
    cout<<"list 1 after merging";
    
    display(list1);
    return 0;
}
   