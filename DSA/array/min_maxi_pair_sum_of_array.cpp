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
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j =nums.size()-1;
        vector<int>res;
        while(i<j){
            res.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }
        int maxEle = *max_element(res.begin(),res.end());
        return maxEle;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {3,5,4,2,4,6};
    int res = obj.minPairSum(nums);
    cout<<res<<en;
    return 0;
}