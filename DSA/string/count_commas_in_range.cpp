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
    int countCommas(int n) {
        string s;
        int ans = 0;
        s = to_string(n);
        if(s.length()>3){
           ans = (n-1000)+1;
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 1100;
    int res = obj.countCommas(n);
    cout<<res<<en;
    return 0;
}