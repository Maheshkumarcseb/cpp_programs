//class template with multiparameter
#include<iostream>
using namespace std;
template<class T1, class T2>   // two class of type T1 and T2 
class myclass
{
    public:
    T1 data1;           /*data1 and data2 are variable of type T1 and T2*/
    T2 data2;           // T1 and T2 are passsed from object of class
    myclass(T1 a,T2 b)   //parametrized constructor
    {
        data1=a;
        data2=b;
    }
    void display()         //member function of class
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass<char, float> ob('c',2.90);       /*the first value that we are passing to the function must be a character
                                                and second value must be float*/
    ob.display();
    return 0;
}
