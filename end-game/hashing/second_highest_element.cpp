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
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        // like first just cnt frequency of each element
        int max_freq = 0;
        int second_max_freq = -1;

        for(int num:nums){
            mp[num]++;
        }

        // now just find out the max freq
        for(auto it:mp){
            max_freq = max(max_freq,it.second);
        }

        // now find out second most occured element 
        for(auto it:mp){
            if(it.second<max_freq){
                second_max_freq = max(second_max_freq,it.second);
            }
        }

        if(second_max_freq==-1){
            return -1;  
        }

        // if there more than one element (have largest 2nd most freq)
        int ans =INT_MAX;
        for(auto it:mp){
            if(it.second == second_max_freq){
                ans = min(ans,it.first);
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    Solution obj; 
    vector<int>nums ={1, 2, 2, 3, 3, 3};
    int res = obj.secondMostFrequentElement(nums);
    cout<<res<<en;
    return 0;
}