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
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int res = 0;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>(n/2)){
                res = it.first;
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {-1, -1, -1, -1};
    int res = obj.majorityElement(nums);
    cout<<res<<en;
    return 0;
}