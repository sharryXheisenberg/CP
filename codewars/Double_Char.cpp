#include <bits/stdc++.h>
using namespace std;

string double_char(const string& str) {
    string s;
    for (int i = 0; i < str.size(); i++) {
        s.push_back(str[i]);
        s.push_back(str[i]);
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);
    cout << double_char(str);
    return 0;
}
