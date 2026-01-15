/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxEle = *max_element(nums.begin(), nums.end());
        
        for(int i = 0; i < n; i++){
            if(nums[i] == maxEle) {
                continue;
            }
            if((nums[i] * 2) > maxEle){
                return -1;
            }
        }
        return distance(nums.begin(), find(nums.begin(), nums.end(), maxEle));
    }
};
//  TC- o(n)
//  SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {3, 6, 1, 0};
    int res = obj.dominantIndex(nums);
    cout << res << en;
    return 0;
}