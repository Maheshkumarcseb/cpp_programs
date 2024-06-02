#include<iostream>
using namespace std;
void xhandler(int test) //throw(int,char)  restricting exception
{
    try
    {
        if(test==0) throw test;
        if(test==1) throw 'c';
        if(test==2) throw 12.12;
    }
    catch(int i)
    {
        //throw;(rethrowing an exception)
        cout<<"cought an integer\n";
    }
    catch(...)
    {
        cout<<"caught after exception\n";
    }   
}
int main()
{
    cout<<"start\n";
    xhandler(0);
    xhandler(1);
    xhandler(3);
    cout<<"end\n";
    return 0;
}