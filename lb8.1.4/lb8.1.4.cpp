#include <iostream>
#include <string>

using namespace std;

string ReplacePatternWithAsterisks(string s, bool& foundPattern) {
    foundPattern = false;
    string result; 
    int length = s.length();

    for (int i = 0; i < length; i++) {
       
        if (s[i] == 'n' && i + 2 < length && s[i + 2] == 'o' && isalpha(s[i + 1])) {
            result += "**";  
            foundPattern = true;
            i += 2; 
        }
        else {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    bool foundPattern;
    str = ReplacePatternWithAsterisks(str, foundPattern);

    if (foundPattern) {
        cout << "letter between n and o: yes" << endl;
    }
    else {
        cout << "letter between n and o: no" << endl;
    }

    cout << "Modified string: " << str << endl;

    return 0;
}
