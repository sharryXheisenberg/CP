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
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,0);
        int pos_idx = 0,neg_idx = 1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                res[neg_idx] = nums[i];
                neg_idx+=2;
            }else{
                res[pos_idx] = nums[i];
                pos_idx+=2;
            }
        }
       return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums ={2, 4, 5, -1, -3, -4};
    vector<int>res = obj.rearrangeArray(nums);
    for(int num:res){
        cout<<num<<" ";
    }
    return 0;
}