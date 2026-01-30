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
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]==nums[j]) cnt+=1;
            }
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,3};
    int res = obj.numIdenticalPairs(nums);
    cout<<res<<en;
    return 0;
   
}