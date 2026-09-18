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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>>Eagle(mp.begin(),mp.end());
        sort(Eagle.begin(), Eagle.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
           if(p1.first==p2.first){
            return p1.first<p2.first;  // if two or more element have same value sort in increasing order of elements value
           }
           return p1.second>p2.second; // here we need to ensure the element with high freq should be first 
        });
        int j = 0;
        vector<int>res(k);
        while(j<k){
            res[j] = Eagle[j].first;
            j++;
        }
        return res;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int>res = obj.topKFrequent(nums,k);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}