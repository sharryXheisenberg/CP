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
    int findLimit(vector<int>nums , int targ , bool isFirst){
        int l = 0 , h = nums.size()-1;
        int limit = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid] == targ){
                limit = mid;
                if(isFirst){ 
                    h = mid-1; // here keep searching for first pointer on left side
                }else{
                    l = mid+1;  // keep searching right for last occurence
                }
            }else if(nums[mid]>targ){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return limit;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       int first = findLimit(nums,target , true);
       if(first==-1){
        return {-1,-1};
       }
       int last = findLimit(nums,target ,false);
       return {first,last};
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = obj.searchRange(nums, target);
    cout << "[" << ans[0] << ", " << ans[1] << "]\n";
    return 0; 
}