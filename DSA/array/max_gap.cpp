/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxG = 0;
        int currntGap = 0;
        int n = nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        for(int i = 1;i<n;i++){
             currntGap = nums[i] - nums[i-1];
        }
        maxG = max(maxG,currntGap);
        return maxG;
    }
};
// TC - O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {10};
    int op = obj.maximumGap(nums);
    cout<<op<<en;
    return 0;
}