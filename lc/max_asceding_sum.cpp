#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;



class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    int max_sum = INT_MIN;
    int wind_sum = 0;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]<nums[j]){
                wind_sum+=nums[i];
            }else if(nums[i]>nums[j]){
                i = j;
            }
        }
    }
        
       
}
};


int main() {

}