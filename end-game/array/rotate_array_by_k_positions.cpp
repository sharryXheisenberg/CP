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
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n; // Handle k >= n

        vector<int> temp;
        
        // 1. Store first k elements
        for(int i = 0; i < k; i++){
            temp.push_back(nums[i]); 
        }

        // 2. Move remaining elements to the front
        for(int i = k; i < n; i++){ 
            nums[i - k] = nums[i];
        }

        // 3. Put stored k elements at the end
        for(int i = 0; i < k; i++){
            nums[n - k + i] = temp[i];
        }
    }
};

void yoBro(const vector<int>& nums){
    for(int val : nums){
        cout << val << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Before Rotation: ";
    yoBro(nums);

    sol.rotateArray(nums, k);

    cout << "After Left Rotation by " << k << ": ";
    yoBro(nums);

    return 0;
}