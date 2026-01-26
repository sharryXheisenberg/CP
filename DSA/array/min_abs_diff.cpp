/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
#define nl "\n"
using namespace std;


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int minDiff = INT_MAX;
        vector<vector<int>>res;
        for(int i=1;i<n;i++){
            minDiff = min (minDiff,arr[i] - arr[i-1]);
        }
       for(int i=1;i<n;i++){
        int df = arr[i] - arr[i-1];
        if(df == minDiff){
            res.push_back({arr[i-1],arr[i]});
        }
       }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> nums = {4,2,1,3};
    vector<vector<int>> res = obj.minimumAbsDifference(nums);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";  
        }
        cout << nl;
    }
    return 0;  
}