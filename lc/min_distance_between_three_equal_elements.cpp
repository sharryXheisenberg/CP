#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define en endl


class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int min_dist = INT_MAX;
        bool fnd_gd_tup = false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if((nums[i]==nums[j]) &&(nums[j]==nums[k])){
                        fnd_gd_tup=true;
                        int curr_dist = abs(i-j) + abs(j-k) + abs(k-i);
                        min_dist = min(min_dist,curr_dist);
                    }
                }
            }
        }
        if(fnd_gd_tup){
            return min_dist;
        }else{
            return -1;
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,1,2,3,2,1,2};
    int ko = obj.minimumDistance(nums);
    cout<<ko<<en;
    return 0;

}