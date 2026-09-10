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
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 1;
        if(n==0)
            return 0;
        
        unordered_set<int>st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }    
        for(auto &it:st){
            if(st.find(it-1)==st.end()){   // here we are doing like this should be first ele like if we get 100 then before that 99 should not be there otherwise we are iterating again from 100 to 99  
                int cnt = 1;
                int x = it;
                while(st.find(x+1)!=st.end()){   // here main thing is that unordered_set will use Log(n) time only 
                    x+=1;
                    cnt+=1; 
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};
 
// TC - O(3n)
// SC = O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {100, 4, 200, 1, 3, 2};
    int res = obj.longestConsecutive(nums);
    cout<<res<<en;
    return 0;
}