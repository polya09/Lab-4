#include<iostream>
#include <string>
using namespace std;
void BaseLevel()
{
    cout << "BaseLevel" << endl;
    cout << "Input str:     ";
    string s;
    getline(cin, s);
    int i = 0;
    for (i; i < s.length(); i++) {
        if (s[i] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    cout << "str =    " << s;
    cout << "\n\n";
}

void MiddleLevel() {
    cout << "MiddleLevel" << endl;
    string str1, str2, str;
    cout << "Input str1:     ";
    getline(cin, str1);
    cout << "Input str2:     ";
    getline(cin, str2);
    int n = 0, m = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        str = str + str1[i] + str2[i];
    }
    cout << "str =    " << str;
    cout << "\n\n";
}

void HighLevel() {
    cout << "HighLevel" << endl;
    string str, ans;
    cout << "str =   ";
    getline(cin, str);
    str.insert(0, " ");
    int start = str.length() - 1;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            ans += str.substr(i + 1, start - i) + ' ';
            start = i - 1;
        }
    }
    cout << ans << endl;
}
int main() {
    BaseLevel();
    MiddleLevel();
    HighLevel();
    return 0;
}