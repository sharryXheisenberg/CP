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
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxWndSz = 0;
        int n = nums.size();
        int left = 0;
        for(int right = 0;right<n;right++){
            while((long long)nums[right] > (long long)nums[left] * k){
                left+=1;
            }
            int curnt_wnd_sz = right-left+1;
            maxWndSz = max(maxWndSz , curnt_wnd_sz);
        }
    
        return n - maxWndSz;
    }
};

// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {2,1,5};
    int k = 2;
    int res = obj.minRemoval(nums,k);
    cout<<res<<en;
    return 0;
}