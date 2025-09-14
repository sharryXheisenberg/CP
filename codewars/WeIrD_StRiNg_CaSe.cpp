#include <string>
#include<bits/stdc++.h>
// #include <string_view>

using namespace std;

string to_weird_case(string str) {
    string res;
    int word_index = 0;   
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') {
            res.push_back(' ');
            word_index = 0;  
        }
        else {
            if(word_index % 2 == 0) {
                res.push_back(toupper(str[i]));
            }
            else {
                res.push_back(tolower(str[i]));
            }
            word_index++;  
        }
    }
    
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
     getline(cin, s);
    string res = to_weird_case(s);
    cout<<res<<endl;
    return 0;
}
