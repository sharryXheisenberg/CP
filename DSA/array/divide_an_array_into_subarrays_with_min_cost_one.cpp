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
    int minimumCost(vector<int>& nums) {
        int score = nums[0];
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        for(int i = 1 ;i<nums.size();i++){
            if(nums[i]<firstMin){
                secondMin = firstMin;
                firstMin = nums[i];
            }else if(nums[i] < secondMin){
                secondMin = nums[i];
            }
        }
        return score + firstMin + secondMin;


        // simple with O(nlog(n)) and O(1) complexities 

        sort(nums.begin()+1,nums.end());
        return nums[0] + nums[1] + nums[2];
    }
};
// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {10,3,1,1};
    int res = obj.minimumCost(nums);
    cout<<res<<en;
    return 0;
    
}