/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;



// If PrefixSum[j] and PrefixSum[i] have the same remainder when divided by k, then the subarray between them is divisible by k.

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> remainderMap;
        
        remainderMap[0] = -1;
        long long currentSum = 0;
        
        for(int i = 0; i < n; i++) {
            currentSum += nums[i];
            
            int remainder = currentSum % k;
            if(remainder < 0) remainder += k;
            
            if(remainderMap.find(remainder) != remainderMap.end()) {
                if(i - remainderMap[remainder] >= 2) {
                    return true;
                }
            } else {
                remainderMap[remainder] = i;
            }
        }
        
        return false;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {5, 0, 0, 0};
    int k = 3;
    bool isOk = obj.checkSubarraySum(nums, k);
    if(isOk) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

