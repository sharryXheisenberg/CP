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
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> op(nums.begin(), nums.end());
        int ans = k;
        while (op.count(ans)) {
            ans += k;
        }
        return ans;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {8,2,3,4,6};
    int k = 2;
    int res = obj.missingMultiple(nums,k);
    cout<<res<<en;
    return 0;
}