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
    vector<int> concatWithReverse(vector<int>& nums) {
    int n = nums.size();
     vector<int>res = nums;
     for(int i=nums.size()-1;i>=0;i--){
            res.push_back(nums[i]);
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,3};
    vector<int>res = obj.concatWithReverse(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return  0;    
}