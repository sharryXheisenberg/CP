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
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int cnt = 0;
            for(int j = i+1;j<n;j++){
                if((nums[i]%2==0 && nums[j]%2==1) || (nums[i]%2==1 && nums[j]%2==0)){
                    cnt+=1;
                }
            }
            res.push_back(cnt);
        }
        return res;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1};
    vector<int>res = obj.countOppositeParity(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}