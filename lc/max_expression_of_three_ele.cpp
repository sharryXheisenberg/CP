#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = nums[n-1];
        int b = nums[n-2];
        int c = nums[0];

        return a+b-c;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {-2,0,5,-2,4};
    int op = obj.maximizeExpressionOfThree(nums);
    cout<<op<<en;
    return 0;
}