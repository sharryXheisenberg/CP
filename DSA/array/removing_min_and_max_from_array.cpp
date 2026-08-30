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
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min_idx = min_element(nums.begin(), nums.end()) - nums.begin();
        int max_idx = max_element(nums.begin(), nums.end()) - nums.begin();
        int L = min(min_idx, max_idx);
        int R = max(min_idx, max_idx);
        
        int both_from_front = R + 1;
        int both_from_back = n - L;
        int from_both_sides = (L + 1) + (n - R);

        return min({both_from_front, both_from_back, from_both_sides});
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<int> nums = {2, 10, 7, 5, 4, 1, 8, 6};
    
    cout << obj.minimumDeletions(nums) << en;
    return 0;
}