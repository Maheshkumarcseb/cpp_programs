#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int i;
    ofstream out("file.txt",ios::out|ios::binary);
   if(!out)
    {
        cout<<"can't open file\n";
        return 1;
    }
    for(i=0;i<255;i++)
    {
        out.put((char)i);   
    }
    out.close();
return 0;   
}