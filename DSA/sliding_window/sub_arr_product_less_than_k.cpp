/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k<=1){
            return 0;
        }
        int i =0;
        int j = 0;
        int cnt = 0;
        int prod = 1;

        while(j<n){
            prod *=nums[j];
            while(prod>=k){
                prod/=nums[i];
                i++;
            }
            cnt += (j-i+1);
            j++;
        }
        return cnt;
    }
};

// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {10,5,2,6};
    int k = 100;
    int op = obj.numSubarrayProductLessThanK(nums,k);
    cout<<op<<en;
    return 0;
}