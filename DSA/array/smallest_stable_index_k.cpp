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
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int current_max = nums[0];   
        for(int i = 0; i < n; i++){
            current_max = max(current_max, nums[i]);
            int current_min = *min_element(nums.begin() + i, nums.end());
            if(current_max - current_min <= k){
                return i; 
            }
        }
        return -1; 
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {5, 0, 1, 4};
    int k = 3;
    int result = obj.firstStableIndex(nums, k);
    cout << result << en; 
    return 0;
}