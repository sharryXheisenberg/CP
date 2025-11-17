#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int last_pnt = -1;
        for(int cur_pnt=0;cur_pnt<n;cur_pnt++){
            if(nums[cur_pnt]==1){
                if(last_pnt!=-1 && (cur_pnt-last_pnt-1)<k){
                    return false;
                }
                last_pnt = cur_pnt;
            }
        }  
        return true;      
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,0,0,1,0,1};
    int k = 2;
    bool pp = obj.kLengthApart(nums,k);
    if(pp){
        cout<<"YES"<<en;
    }else{
        cout<<"NO"<<en;
    }
    return 0;
}
