/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt =0;
        unordered_map<int,int>op;
        for(int i=0;i<n;i++){
            op[nums[i]]++;
        }
        for(auto it:op){
            int c = it.second;
            if(c==1) return -1;
            cnt+=(c+2)/3;
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {14,12,14,14,12,14,14,12,12,12,12,14,14,12,14,14,14,12,12};
    int op = obj.minOperations(nums);
    cout<<op<<en;
    return 0;
}