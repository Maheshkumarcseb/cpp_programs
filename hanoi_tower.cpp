#include <iostream> 
using namespace std;
 
void hanoi (char, char, char, int); 
 
int main ( ) 
{ 
 int n = 4; 
 hanoi ('a', 'b', 'c', n); 
 cout<<"enter the value of n";
 cin >> n; 
 return 0; 
} 
 
void hanoi (char from, char via, char to, int n) 
{ 
 if(n==1) 
 { 
 cout << from << " => " << to << endl; 
 }
 return; 
 } 