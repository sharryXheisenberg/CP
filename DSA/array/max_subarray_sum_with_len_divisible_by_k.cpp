/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>prefxSum(n);
        prefxSum[0] = nums[0];
        for(int i=1;i<n;i++){
            prefxSum[i] = prefxSum[i-1] + nums[i];
        }
        long long res = LLONG_MIN;
        for(int st = 0;st<k;st++){
            long long cursum = 0;

            int i = st;
            while(i<n && i+k-1<n){
                int j = i+k-1;
                long long subSum = prefxSum[j] - (i > 0 ? prefxSum[i-1] : 0);


                cursum = max(subSum,cursum+subSum);
                res = max(res,cursum);
                i+=k;
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {-5,1,2,-3,4};
    int k = 4;
    int op = obj.maxSubarraySum(nums,k);
    cout<<op<<en;
    return 0;
}

// TC - O(k*n/k) = O(n)
// SC - O(n)