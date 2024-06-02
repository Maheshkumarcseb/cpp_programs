#include <iostream>
#include <sstream>

#include <bits/stdc++.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
  int age;
  string first_name;
  string last_name;
  int standard;
  public:
  int set_age(int a)
  {
      age=a;
  }
  string set_first_name(string b)
  {
      first_name=b;
  }
  string set_last_name(string c)
  {
      last_name=c;
  }
  int set_standard(int d)
  {
      standard=d;
  }
  int get_age()
  {
      cout<<age<<endl;
      return age;
  }
  string get_first_name()
  {
      cout<<first_name;
      return first_name;
  }
  string get_last_name()
  {
      cout<<last_name;
      return last_name;
  }
int get_standard()
  {
      cout<<standard;
      return standard;
  }
  string to_string()
  {
      cout<<age<<","<<first_name<<","<<last_name<<","<<","<<standard;
  }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    // cin >> age >> first_name >> last_name >> standard;
    cin>>age;
    cin>>first_name;
    cin>>last_name;
    // getline(cin, first_name);
    // getline(cin, last_name);
    cin>>standard;
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    // cout<<st.get_age();


    cout<<st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout<<st.get_standard() << "\n";
    cout << "\n";
    cout<<st.to_string();
    return 0;
}
