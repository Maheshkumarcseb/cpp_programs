// #include <iostream>
// //#include <cctype>
// using namespace std;

// int main() {

//   // convert 'a' to uppercase
//   char ch = toupper('a');

//   cout << ch;

//   return 0;
// }

// Output: A
// #include <iostream>
// #include <cctype>
// using namespace std;

//int main() {

  // convert 'A' to lowercase
//   char ch = tolower('A');

//   cout << ch;

//   return 0;
// }
#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;
int main(){    
    char str[] = "<html>\n<head>\n\t<title>C++</title>\n</head>\n</html>";
    cout << "Before removing whitespace characters" << endl;
    cout << str << endl << endl;
    cout << "After removing whitespace characters" << endl;
    for (int i=0; i<strlen(str); i++)
    {
        if (!isspace(str[i]))
            cout << str[i];
    }
    return 0;
}