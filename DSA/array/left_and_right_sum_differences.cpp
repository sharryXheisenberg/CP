/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int totalSum = 0;
        int leftSum = 0;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
        }
        for(int i = 0; i < n; i++){
            int rightSum = totalSum - leftSum - nums[i];
            ans[i] = abs(leftSum - rightSum);  
            leftSum += nums[i];
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {10, 4, 8, 3};
    vector<int> res = obj.leftRightDifference(nums);
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << en;
    return 0;
}