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
    int minimumCost(vector<int>& nums, int k) {
        long long gaten = k; 
        long long current_resources = gaten;
        long long total_ops = 0;
        long long mod = 1e9 + 7;
        
        for (int i = 0; i < nums.size(); i++) {
            if (current_resources < nums[i]) {
                long long needed = nums[i] - current_resources;
                long long ops = (needed + gaten - 1) / gaten; 
                total_ops += ops;
                current_resources += ops * gaten;
            }
            current_resources -= nums[i];
        }
        long long M = total_ops % mod;
        // (1e9+7 + 1) / 2 = 500000004 
        long long cost = (M * (M + 1)) % mod * 500000004 % mod;
        return cost;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {1, 1, 7, 14};
    int k = 4;
    long long res = obj.minimumCost(nums, k);
    cout << res << en;
    return 0;
}