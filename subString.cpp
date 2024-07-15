#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
#include <iostream>

int main() {
    Solution solution;
    string haystack = "hello";
    string needle = "ll";
    int result = solution.strStr(haystack, needle);
    cout << "Index: " << result << endl;
    return 0;
}
