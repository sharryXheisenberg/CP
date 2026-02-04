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
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;
        int i = 0;
        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        if (i == 0 || i == n - 1) return false;

        int peak = i;
        while (i < n - 1 && nums[i] > nums[i + 1]) {
            i++;
        }
        if (i == peak || i == n - 1) return false;

        while (i < n - 1 && nums[i] < nums[i + 1]) {
            i++;
        }
        return (i == n - 1);
    }
};
// TC - O(n)
// SC - O(1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums1 = {1, 3, 5, 4, 2, 6};
    cout << "Test 1 [1,3,5,4,2,6]: " << (obj.isTrionic(nums1) ? "true" : "false") << en;
    vector<int> nums2 = {2, 1, 3};
    cout << "Test 2 [2,1,3]: " << (obj.isTrionic(nums2) ? "true" : "false") << en;

    return 0;
}