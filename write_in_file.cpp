#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("inventary");
    if(!out)
    {
        cout<<"can't open file\n";
        return 1;
    }
    out<<"A"<<12<<endl;
    out<<"B"<<34<<endl;
    out<<"C"<<56<<endl;
    out.close();
    return 0;

}


