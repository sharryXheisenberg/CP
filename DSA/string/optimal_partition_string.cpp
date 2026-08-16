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
    int partitionString(string s) {
        vector<int>lastSeen(26,-1);
        int crnt_s  = 0;
        int cnt = 0;
        for(int i = 0 ; i<s.length();i++){
            char ch = s[i];
            if(lastSeen[ch-'a']>=crnt_s){
                cnt+=1;
                crnt_s=i;
            }
            lastSeen[ch-'a'] = i;
        }
        return cnt+1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abacaba";
    int res = obj.partitionString(s);
    cout<<res<<en;
    return 0;
}