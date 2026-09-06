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
    int cntTwoAdjacentCommonEle(string s){
        int cnt = 0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                cnt+=1;
            }
        }
        return cnt;
    }
    int countRotations(string s, int k) {
        int n = s.length();
        int ans = 0;
        for(int i=0;i<n;i++){
        if(cntTwoAdjacentCommonEle(s)==k){
            ans+=1;
        }
        rotate(s.begin(),s.begin()+1,s.end());
      }
      return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "aab";
    int k = 1;
    int res = obj.countRotations(s,k);
    cout<<res<<en;
    return 0;
}