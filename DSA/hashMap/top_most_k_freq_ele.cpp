/* 
 * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n = nums.size();
       unordered_map<int,int> freq;
       for(int num:nums){
            freq[num]++;
       }
       vector<pair<int,int>>vec;
       for(auto &it:freq){
        vec.push_back({it.first,it.second});
       }
       auto lambda = [] (pair<int,int>p1,pair<int,int>p2){
            if(p1.second == p2.second){
                return p1.first<p2.first;
            }
            return p1.second>p2.second;   // no matching freq
       };
       
       sort(vec.begin(),vec.end(),lambda);
       int i =0;
       vector<int>res(k);
       while(i<k){
        res[i] = vec[i].first;
        i++;
       }
       return res;
    }
};
// TC - O(n)
// SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int>res = obj.topKFrequent(nums,k);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}