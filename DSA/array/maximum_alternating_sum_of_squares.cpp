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
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(auto& num:nums){
            num*=num;   // squaring the numbers
        }
        sort(nums.begin(),nums.end()); // sort them 
        return accumulate(nums.begin() + n/2 , nums.end() , 0LL) - accumulate(nums.begin(),nums.begin()+n/2,0LL);

        // here is that after sorting the elements minimum at odd indices and max elements at even position 
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     Solution obj;
     vector<int>nums = {1,-1,2,-2,3,-3};
     int sum = obj.maxAlternatingSum(nums);
     cout<<sum<<en;
    return 0;
}