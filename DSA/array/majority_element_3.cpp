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
    vector<int> majorityElementTwo(vector<int>& nums) {
        map<int,int> mp;
        vector<int>res;
        int n = nums.size();
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            if(it.second>n/3){
            res.push_back(it.first);
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1, 2, 1, 1, 3, 2, 2};
    vector<int>res = obj.majorityElementTwo(nums);
    for(int j:res){
        cout<<j<<" ";
    }
    return 0;
}