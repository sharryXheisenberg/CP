#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    unordered_map<char,int>freq;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }

    for(auto it:freq){
        if(it.second==1){
            cout<<it.first<<endl;
        }
    }
    return 0;
}