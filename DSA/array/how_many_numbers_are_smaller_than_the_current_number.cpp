/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int curr_cnt = 0;
            for(int j=0;j<n;j++){
                if(j!=i && nums[i]>nums[j] ){
                     curr_cnt+=1;
                } 
            }
            res.push_back(curr_cnt);
        }
        return res;
    }

};

//TC - O(n^2)
// SC - O(?)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {8,1,2,2,3};
    vector<int>res = obj.smallerNumbersThanCurrent(nums);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";

    }
    return 0;

}