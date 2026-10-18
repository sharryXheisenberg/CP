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
    int minDeletions(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if((nums[i-1] ^ nums[i]) == 0){
                cnt+=1;
            }
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,1,2,2,2,3};
    int res = obj.minDeletions(nums);
    cout<<res<<en;
    return 0;    
}