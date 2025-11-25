/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {4,3,2,7,8,2,3,1};
    vector<int>res = obj.findDisappearedNumbers(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}