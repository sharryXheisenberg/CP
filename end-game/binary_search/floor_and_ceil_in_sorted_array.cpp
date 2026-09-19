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
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int l = 0;
        int h = nums.size()-1;
        int floor = -1;
        int ceil = -1;

        while(l<=h){
            int m = l + (h-l)/2;
            if(nums[m]<=x){
                floor = nums[m];
                l = m+1;
            }else{
                h = m-1;
            }
        }

        l =0 , h = nums.size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]>=x){
                ceil = nums[m];
                h = m-1;
            }else{
                l = m+1;
            }
        }
        return {floor,ceil};
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3, 4, 4, 7, 8, 10};
    int x = 5;
    auto res1= obj.getFloorAndCeil(nums,5);
    cout<<res1[0] <<" " << res1[1]<<en;
    return 0;
}