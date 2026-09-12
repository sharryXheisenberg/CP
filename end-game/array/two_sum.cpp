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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>res;
        unordered_map<int,int>op;
        for(int i=0;i<n;i++){
            int lol = nums[i];
            int just_like_that = target - lol ;
            if(op.find(just_like_that)!=op.end()){
                return { op[just_like_that] , i};
            }
            op[lol] = i;
        }
        return {-1,-1};
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums={-6, 7, 1, -7, 6, 2};
    int tar = 3;
    vector<int> res = obj.twoSum(nums, tar);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}