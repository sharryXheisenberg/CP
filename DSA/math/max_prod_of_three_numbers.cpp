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
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int option1 = nums[n-1] * nums[n-2] * nums[n-3];
        int option2 = nums[0] * nums[1] * nums[n-1];
        return max(option1, option2);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<int> nums = {-100, -98, -1, 2, 3, 4};
    int res = obj.maximumProduct(nums);
    cout << res << en;
    
    return 0;
}