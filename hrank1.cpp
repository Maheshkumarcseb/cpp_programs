#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp="58";
   // getline(cin, n_temp);

    //int n = stoi(ltrim(rtrim(n_temp)));
        int n = stoi(n_temp); // STOI USED TO CONVERT STRING T NUM

    // Write your code here
    if (n >= 1 && n <= 9)
    {
        string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cout << numbers[n - 1] << endl;
    }
    else
    {
        cout << "Greater than 9" << std::endl;
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
