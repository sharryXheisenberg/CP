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
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res1;
        vector<int> res2;
        int n = nums.size();
        res1.push_back(nums[0]);
        if (n > 1) {
            res2.push_back(nums[1]);
        }
        for(int i = 2; i < n; i++) {
            if(res1.back() > res2.back()) {
                res1.push_back(nums[i]);
            } else {
                res2.push_back(nums[i]);
            }
        }
        res1.insert(res1.end(), res2.begin(), res2.end());
        return res1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<int> nums = {1, 2, 4};
    vector<int> res = obj.resultArray(nums);
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << en;
    
    return 0;
}