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
    int reverseBits(int n) {
        if(n==0) 
            return 0;
        int res = 0;
        for(int i=1;i<=32;i++){
            res<<=1;
            res = (res | (n&1));
            n>>=1;
        }
        return res;
    }
};

//TC - O(32) - O(1) - constant
// SC - constant

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 43261596;
    int res = obj.reverseBits(n);
    cout<<res<<en;
    return 0;
}