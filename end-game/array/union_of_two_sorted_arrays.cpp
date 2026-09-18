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
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        set<int>st(nums1.begin(),nums1.end());
        vector<int>res(st.begin(),st.end());
        return res;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>nums1 = {3, 4, 4, 4};
    vector<int>nums2 = {6, 7, 7};
    vector<int>res = obj.unionArray(nums1,nums2);
    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}