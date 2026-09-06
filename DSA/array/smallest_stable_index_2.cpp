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
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suf_min(n);
        suf_min[n-1]=nums[n-1];
        // suffix_min
        for(int i =n-2;i>=0;i--){
            suf_min[i] = min(nums[i],suf_min[i+1]);  // it will form the min suffix array (O(n)) 
        }
        //prefix sum
        int pref_max = nums[0];
        for(int i=0;i<n;i++){
            pref_max = max(pref_max,nums[i]);
            if(pref_max - suf_min[i]<=k){
                return i;
            }
        }
        return -1;
    }
};
// TC - O(n)
// SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {5,0,1,4};
    int k=3;
    int res = obj.firstStableIndex(nums,k);
    cout<<res<<en;
    return 0;
}