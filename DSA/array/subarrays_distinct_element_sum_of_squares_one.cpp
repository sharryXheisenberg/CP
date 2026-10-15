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
    int sumCounts(vector<int>& nums) {
        int n = nums.size(),res = 0;
        for(int i=0;i<n;i++){ // outer loop
            unordered_set<int>s;
            for(int j=i;j<n;j++){ // inner loop for the 
                s.insert(nums[j]);
                res+=s.size() * s.size(); // it's not need to do sum
                // of the squares of elements it's about the size of the distinct size 
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,1};
    int res = obj.sumCounts(nums);
    cout<<res<<en;
    return 0;
}