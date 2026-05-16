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
    bool isGood(vector<int>& nums) {
        int L = nums.size();
        int n = L - 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(nums[i] != i + 1){
                return false;
            }
        }
        if(nums[L - 1] != n){
            return false;
        }
        
        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    
    vector<int> nums = {1, 3, 3, 2};
    bool res = obj.isGood(nums);
    
    if(res) {
        cout << "true" << en;
    } else {
        cout << "false" << en;
    }
    
    return 0;    
}