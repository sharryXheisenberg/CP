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
    int searchInsert(vector<int> &nums, int target)  {
      int l = 0;
      int h = nums.size()-1;
      while(l<=h){
            int m = l + (h-l)/2;
            if(nums[m]==target){
                return m;
            }
            else if(target>nums[m]){
                l = m+1;
            }
            else {
                 h = m - 1;
            }
      }     
      return l;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1, 3, 5, 6};
    int tar = 2;
    int res = obj.searchInsert(nums,tar);
    cout<<res<<en;
    return 0;
}