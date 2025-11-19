/* 
 * Author - Balerion_The_second
 */
#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==original){
                original*=2;
            }
        }
        return original;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {2,7,9};
    int ori = 4;
    int ok = obj.findFinalValue(nums,ori);
    cout<<ok<<en;
    return 0;
}