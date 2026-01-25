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
    int minimumPrefixLength(vector<int>& nums) {
        int n  = nums.size();
        for(int i=n-1;i>0;i--){  
            if(nums[i-1]>=nums[i]) {
                return i;
            }
        }
        return 0;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {4,3,-2,-5};
    int op = obj.minimumPrefixLength(nums);
    cout<<op<<en;
    return 0;
    

}