/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        if (n == 1) {
            res.push_back(nums[0]);
            return res;
        }

        for (int i = 0; i < n; i++) {
            if (i == 0 || i == n - 1) {
                res.push_back(nums[i]);
                continue;
            }
            
            bool greater_than_left = true;
            for (int j = 0; j < i; j++) {
                if (nums[i] <= nums[j]) {
                    greater_than_left = false;
                    break; 
                }
            }
            
            bool greater_than_right = true;
            for (int j = i + 1; j < n; j++) {
                if (nums[i] <= nums[j]) {
                    greater_than_right = false;
                    break;
                }
            }
            if (greater_than_left || greater_than_right) {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {1, 2, 4, 2, 3, 2};
    vector<int> res = obj.findValidElements(nums);
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << en;
    return 0;    
}