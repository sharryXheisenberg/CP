#include <string>
#include<bits/stdc++.h>

using namespace std;

string reverse_words(string str)
{
    string res,newString;
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            newString.push_back(str[i]);
        }
        else {
             reverse(newString.begin(),newString.end());
            res+=newString;
            res+=' ';
            newString.clear();
        }  
    }

    reverse(newString.begin(),newString.end());
    res+=newString;

  return res;
  
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string op = reverse_words(s);
    cout<<op<<endl;
    return 0;
}