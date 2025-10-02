#include <bits/stdc++.h>
using namespace std;

string alphabet_position(string &text) {
  string res;
  for(char c:text){
    if(isalpha(c)){
        char low = tolower(c);
        int pos = low - 'a' + 1;
        res+=to_string(pos) + " ";
    }
  }
  if(!res.empty()) res.pop_back();
  return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    string res = alphabet_position(s);
    cout<<res<<endl;
    return 0;
}