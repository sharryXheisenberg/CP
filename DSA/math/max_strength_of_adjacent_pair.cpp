/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max_strength = 0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                long long g = __gcd(nums[i],nums[j]);
                long long curnt_strength = (1LL* nums[i]*nums[j])/(g*g);

                max_strength = max(curnt_strength,max_strength);
            }
        }
        return max_strength;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {4,6,8};
    int res = obj.maxPairStrength(nums);
    cout<<res<<en;
    return 0;
}