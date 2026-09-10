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

int cost(vector<int>& nums){
    int n = nums.size();
    return (n - 1) * (*min_element(nums.begin(), nums.end()));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>nums = {2,4,5,3,6};
    int res = cost(nums);
    cout<<res<<en;
    return 0;
}