#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;



class Solution {
public:
    int minLengthAfterRemovals(string s) {
        unordered_map<char,int>freq;
        int cnt_a=0;  
        int cnt_b =0;  
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto it:freq){
            if(it.first == 'a') cnt_a +=it.second;
            else cnt_b+=it.second;
        }

        return abs(cnt_a-cnt_b);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "aaabb";
    int op = obj.minLengthAfterRemovals(s);
    cout<<op<<en;
    return 0;
}