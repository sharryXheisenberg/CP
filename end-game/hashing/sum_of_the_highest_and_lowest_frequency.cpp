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
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        map<int,int>mp;
        int max_freq = 0;
        int min_freq =  INT_MAX;
        for(int num:nums){
            mp[num]++;
        }
        for(auto &it : mp){
            if(it.second > max_freq){
                max_freq = it.second;
            }
            if(it.second < min_freq){
                min_freq = it.second;
            }
        }
        return max_freq + min_freq;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1, 2, 2, 3, 3, 3};
    int res = obj.sumHighestAndLowestFrequency(nums);
    cout<<res<<en;
    return 0;
}