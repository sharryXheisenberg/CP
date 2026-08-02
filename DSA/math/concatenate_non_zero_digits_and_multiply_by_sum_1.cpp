/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string op;
        int res = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                op+=s[i];
                res+=s[i]-'0';
            }
        }
        int kl = stoi(op);
        return (long long)kl * res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    long long res = obj.sumAndMultiply(10203004);
    cout<<res<<en;
    return 0;
    
    
}