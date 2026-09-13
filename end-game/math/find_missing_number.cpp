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
    int missingNumber(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        long long sum = accumulate(nums.begin(),nums.end(),0);
        long long op = (n)*(n+1)/2;
        ans = op - sum;
        return ans;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1, 3, 6, 4, 2, 5};
    int res = obj.missingNumber(nums);
    cout<<res<<en;
    return 0;
}