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
    int findGCD(vector<int>& nums) {
        int min_ele = *min_element(nums.begin(),nums.end());
        int max_ele = *max_element(nums.begin(), nums.end());
        return __gcd(min_ele,max_ele);
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3,3};
    int res = obj.findGCD(nums);
    cout<<res<<en;
    return 0;
}