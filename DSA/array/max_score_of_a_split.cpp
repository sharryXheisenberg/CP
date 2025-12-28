/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0; 
        vector<long long> pref(n);
        pref[0] = nums[0];
        for (int i = 1; i < n; ++i){
            pref[i] = pref[i-1] + nums[i];
        } 
        vector<int>suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMin[i] = min(nums[i],suffixMin[i+1]);
        }
        long long sc = LLONG_MIN;
        for(int i =0;i<n-1;i++){
            long long curntScore = pref[i] - suffixMin[i+1];
            if(curntScore>sc){
                sc = curntScore;
            }
        }
        return sc;
        
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {10,-1,3,-4,-5};
    int res = obj.maximumScore(nums);
    cout<<res<<en;
    return 0;
}