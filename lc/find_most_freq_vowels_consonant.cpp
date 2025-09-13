#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
       int maxVowel=0;
       int maxConsonant=0;
       unordered_map<char,int>freq;
       for(int i=0;i<s.size();i++){
        freq[s[i]]++;
       } 
       for(auto it:freq){
        char c = it.first;
        int f = it.second;
        if(c=='a'|| c=='e'|| c == 'i'||c == 'o'||c == 'u'){
            maxVowel=max(maxVowel,f);
        }
        else{
            maxConsonant=max(maxConsonant,f);
        }
       }
       return maxVowel+maxConsonant;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s ;
    cin>>s;
    int o = obj.maxFreqSum(s);
    cout<<o<<endl;
    return 0;
}