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
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int>first_entry;
        unordered_map<int,int>last_entry;   
        unordered_map<int,int>total_cnt;

        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            if(first_entry.find(val)==first_entry.end()){
                first_entry[val] = i;
            }
            last_entry[val]=i;
            total_cnt[val]++;
        }
        int s_p = 0;
        for(auto &it:total_cnt){
            int val = it.first;
            int count = it.second;
            int bx_len = last_entry[val]-first_entry[val] + 1;
            if(bx_len == count){
                s_p+=1;
            }
        }
        return s_p;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {37,71};
    int res = obj.countSpecialIntegers(nums);
    cout<<res<<en;
    return 0;
}