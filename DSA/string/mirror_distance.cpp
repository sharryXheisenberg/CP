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
    int mirrorDistance(int n) {
    string op = to_string(n);
    reverse(op.begin(),op.end());
    int l = stoi(op);
    return abs(l-n);
 }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 10;
    int res = obj.mirrorDistance(n);
    cout<<res<<en;
    return 0;
}