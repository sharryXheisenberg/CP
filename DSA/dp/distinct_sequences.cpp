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
    typedef unsigned long long ull;  // we can declare the variables like this also 
    ull dp[1001][1001];

    ull solve(string s , string t,int m , int n){
        if(n==0){
            return dp[m][n]=1;  // found one subsequence
        }
        if(m==0){
            return dp[m][n]=0;
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(s[m-1]==t[n-1]){
            return dp[m][n] = solve(s,t,m-1,n-1) + solve(s,t,m-1,n);
        }else{
            return dp[m][n]= solve(s,t,m-1,n);
        }
        return -1;
    }
    int numDistinct(string s, string t) {
        int m = s.length();
        int n = t.length();
        memset(dp,-1,sizeof(dp));
        return solve(s,t,m,n);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "rabbbit";
    string t = "rabbit";
    int res = obj.numDistinct(s,t);
    cout<<res<<en;
    return 0;
}