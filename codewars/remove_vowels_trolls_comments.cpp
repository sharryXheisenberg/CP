#include<bits/stdc++.h>
#include <string>
using namespace std;

//This website is for losers LOL!
// Ths wbst s fr lsrs LL!

string disemvowel(const string &str) {
    string res;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (char c : str) {
        char lc = tolower(c);
        if (find(vowels.begin(), vowels.end(), lc) == vowels.end()) {
            res.push_back(c);
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str = "This website is for losers LOL!";
    string res = disemvowel(str);
    cout << res << endl;   // Output: Srbh
    return 0;
}
