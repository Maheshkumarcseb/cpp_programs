#include<iostream>
using namespace std;
int sum_of_digit(int n)
{
    int digit,sum=0;
    while(n!=0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    
    }
    return sum;
}
int main()
{
    int number,digit_sum;
    cout<<"enter a positive integeger number";
    cin>>number;
    digit_sum=sum_of_digit(number);
    cout<<"sum of number is:"<<digit_sum<<endl;
    return 0;
}