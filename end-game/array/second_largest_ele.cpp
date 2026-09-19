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
    int secondLargestElement(vector<int>& nums) {
        int sec_max = INT_MIN;
        set<int>st(nums.begin(),nums.end());
        if(st.size()==1){
            return -1;
        }
        int max_op = *max_element(st.begin(),st.end());
        vector<int>res(st.begin(),st.end());
        for(int i = 0 ;i<res.size();i++){
            if(max_op>res[i]){
                sec_max = max(sec_max,res[i]);
            }
        }
        return sec_max;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {7, 7, 2, 2, 10, 10, 10};
    int res = obj.secondLargestElement(nums);
    cout<<res<<en;
    return 0;
}