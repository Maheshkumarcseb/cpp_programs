#include<iostream>
#include<cstring>
using namespace std;
class myexception
{
    public:
    char str[80];
    int w;
    myexception()
    {
        *str=0;
         w=0;
    }
    myexception(char *s,int e)
    {
        strcpy(str, s);
        w=e;
    }
};
int main()
{
    int i;
    try
    {
        cout<<"enter a positive integer\n";
        //cin>>i;
        //if(i<0)
        throw myexception("not positive", -1);
    }
    catch(myexception e)
    {
       cout<<e.str<<":";
       cout<<e.w<<endl;
    }
  return 0;  
}