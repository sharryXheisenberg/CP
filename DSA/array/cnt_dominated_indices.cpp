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
    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n - 1; i++) {
            double sum = 0;
            double elements_on_right = 0;
            for(int j = i + 1; j < n; j++) {
                sum += nums[j];
                elements_on_right++;
            }
            double avg = sum / elements_on_right;

            if(nums[i] > avg) {
                count++;
            }
        }
        return count;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {4, 1, 2};
    cout << "Input: [4, 1, 2] -> Output: " << obj.dominantIndices(nums) << en;
    
    return 0; 
}