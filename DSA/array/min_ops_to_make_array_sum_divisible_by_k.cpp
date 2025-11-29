/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        int ops = 0;
        for(int num:nums){
            sum+=num;
        }
        if(sum%k!=0){
            while(sum%k!=0){
                int i=0;
                if(nums[i]>0) nums[i]-=1;
                sum-=1;
                i+=1;
                ops+=1;
            }
        }
        return ops;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3,2};
    int k = 6;
    int op = obj.minOperations(nums,k);
    cout<<op<<en;
    return 0;
}