#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string toggleCase(const string& s) {
        string res = "";
        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z')
                res += (ch - 'a' + 'A');
            else if (ch >= 'A' && ch <= 'Z')
                res += (ch - 'A' + 'a');
            else
                res += ch;
        }
        return res;
    }
};

int main() {
    Solution obj;
    string s = "Hello123WORLD";
    cout << obj.toggleCase(s);
    return 0;
}