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
    int minimumPairRemoval(vector<int>& nums) {
        int firstMax = nums[0];
        int crnt_sm  = 0;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]<nums[i-1] || firstMax>nums[1]){
                nums[i-1] = nums[i]+nums[i-1];
                crnt_sm+=1;
            }
        }
        return crnt_sm;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {9,3,7,5};
    int res = obj.minimumPairRemoval(nums);
    cout<<res<<en;
    return 0;

}