#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   int i;
   ofstream out("file",ios::out|ios::binary);
   if(!out)
   {
    cout<<"error in opening the file";
    return 0;
   } 
   for(i=0;i<256;i++)
   {
   out.put((char)i);
   }
   out.close();
   return 0;
}