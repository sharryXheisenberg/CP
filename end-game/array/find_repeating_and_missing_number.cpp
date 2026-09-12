/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define en endl
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        
        // Step 1: Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }
        
        int repeating_ele = -1;
        int missing_ele = -1;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                repeating_ele = i;
            } else if (freq[i] == 0) {
                missing_ele = i;
            }
        } 
        return {repeating_ele, missing_ele};
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<int> nums = {6, 5, 7, 1, 8, 6, 4, 3, 2};
    vector<int> res = obj.findMissingRepeatingNumbers(nums);
    
    cout << "[" << res[0] << ", " << res[1] << "]" << en; // Output: [6, 9]
    return 0;
}