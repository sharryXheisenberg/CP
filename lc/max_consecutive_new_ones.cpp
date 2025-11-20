/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int curr_cnt = 0;
       int max_cnt = 0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            curr_cnt+=1;
            max_cnt = max(max_cnt,curr_cnt);
        }else{
            curr_cnt = 0;

        }
       }
       return max(max_cnt,curr_cnt);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums ={1,0,1,1,0,1};
    int op = obj.findMaxConsecutiveOnes(nums);
    cout<<op<<en;
    return 0;

}