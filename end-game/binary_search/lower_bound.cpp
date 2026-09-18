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

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int l = 0;
        int h = nums.size()-1;
        int res = nums.size();
        while(l<=h){
            int m = l + (h-l)/2;
            if(nums[m]>=x){
                res =m;
                h = m-1;
            }
            else { 
                l = m+1;
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {3,5,8,15,19};
    int x =3;
    int res = obj.lowerBound(nums,x);
    cout<<res<<en;
    return 0;
}