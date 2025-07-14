#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>res;
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(nums[j]==key && abs(i-j)<=k){  
                     res.push_back(i);   
                     break;      
                }
            }
        }
        return res;
    }
};

int main() {
    Solution obj;
    vector<int>nums = {3,4,9,1,3,9,5};
    vector<int>res;
    int key = 9;
    int k = 1;
    res = obj.findKDistantIndices(nums , key , k);
    for(int i = 0 ;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}