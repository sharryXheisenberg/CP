#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

//brute force approach

    // vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int>res(n,1);
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(i!=j){
    //                 res[i]*=nums[j]; 
    //             }
    //         }
    //     }
    //     return res;
    // }

    // optimal approach

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,1);
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }

};





int main(){
    Solution obj;
    vector<int>nums = {1,2,3,4};
    vector<int>res1;
    res1 = obj.productExceptSelf(nums);
   for(int i = 0; i < res1.size(); i++){
        cout << res1[i] << " ";
    }
    return 0;
}