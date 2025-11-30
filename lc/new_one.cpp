/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==0) return n;
        if(n<=k) return 0;
         sort(nums.begin(),nums.end());
        int cnt = 0;
        long long  thres  = nums[n-k];
        for(int num:nums){
            if(num<thres) {
                cnt++;
            }
        }
        
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3,1,2};
    int k = 1;
    int op = obj.countElements(nums,k);
    cout<<op<<en;
    return 0;
}