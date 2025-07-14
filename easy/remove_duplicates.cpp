#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>res;
        unordered_map<int,int>freq;
        for(int n:nums){
            freq[n]++;
        }
        for(auto it:freq){
            res.insert(it.first);
        }
        return res.size();
    }
};

int main( ){
    Solution obj;
    vector<int> nums = {2,10,10,30,30,30};
    int r1 =  obj.removeDuplicates(nums);
    cout<<r1<<endl;
    return 0;
}