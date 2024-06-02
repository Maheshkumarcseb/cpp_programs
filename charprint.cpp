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
   // out<<"mahesh kumar\n";
   // out<<"sri sai ram college of engineering bangalore\n";
   // out<<"studing in btech\n";
    for(i=0;i<255;i++)
    {
        out.put((char)i);   
    }
    out.close();
return 0;   
}