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
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++){
            sum += (26- (s[i]-'a'))*(i+1);
        }
        return sum;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abc";
    int res = obj.reverseDegree(s);
    cout<<res<<en;
    return 0;
}