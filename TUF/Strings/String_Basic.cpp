#include <iostream>
using namespace std;

class Solution {
public:
    // Traversing a string and printing each character with index
    void String_Traversal(string name) {
        for (int i = 0; i < name.length(); i++) {
            cout << "The element present in the string at index "
                 << i << " is: " << name[i] << endl;
        }
    }

    // Demonstrates pass-by-value behavior in strings
    string modify_String(string str) {
        // newStr is a COPY of str (both are local to this function)
        string newStr = str;

        // Modifying newStr does NOT affect str or original string in main
        newStr[0] = 'P';

        // str is also a COPY of the original string from main
        // Modifying str here does NOT affect the original string
        str[0] = 'S';

        // Returning modified copy
        return newStr;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter your name: " << endl;
    cin >> s;

    obj.String_Traversal(s);

    string modified = obj.modify_String(s);

    cout << "The modified new string is: " << modified << endl;
    cout << "The original string is: " << s << endl;

    return 0;
}
