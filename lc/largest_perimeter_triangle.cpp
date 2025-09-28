#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>()); // sort descending
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] < nums[i+1] + nums[i+2]) {
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2,1,2};
    cout << sol.largestPerimeter(nums1) << "\n"; 

    vector<int> nums2 = {1,2,1,10};
    cout << sol.largestPerimeter(nums2) << "\n";

    return 0;
}
