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
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
       int n = capacity.size();
       vector<int>diff(n,0);
       int ans = 0;
       for(int i=0;i<n;i++){
            diff[i] = capacity[i] - rocks[i];
       }
       sort(diff.begin(),diff.end());
       for(int j=0;j<diff.size();j++){
            if(diff[j]==0){
                ans+=1;
            }
            else if(additionalRocks>=diff[j]){
                ans+=1;
                additionalRocks-=diff[j];
            }else{
                break;
            }
       }
       return ans;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>cap = {10,2,2};
    vector<int>rocks = {2,2,0};
    int additionalRocks = 100;
    int res= obj.maximumBags(cap,rocks,additionalRocks);
    cout<<res<<en;
    return 0;
}