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
    int longestBalanced(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
           unordered_set<int>even;
           unordered_set<int>odd;
           for(int j =i;j<n;j++){
            if(nums[j]%2==0){
                even.insert(nums[j]);
            }else{
                odd.insert(nums[j]);
            }
            if(even.size()==odd.size()){
                res = max(res,j-i+1);
            }
           }
        }
        return res;
    }
};
// TC - O(n^2)
// SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3, 2, 2, 5, 4};
    int res= obj.longestBalanced(nums);
    cout<<res<<en;
    return 0;
}