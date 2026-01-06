/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
        int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0; i + 1 < n; i += 2){
            sum += nums[i];
        }
        return sum;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>arr = {1,4,3,2};
    int res = obj.arrayPairSum(arr);
    cout<<res<<en;
    return 0;
}