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
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>res;
        for(int i=0;i<matrix.size();i++){
            int cnt = 0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    cnt+=1;
                }
                
            }
            res.push_back(cnt);
        }
        return res;
    }
};

// TC - O(n^2)
// SC - O(n)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int>res ;
    vector<vector<int>>msx = {{0,1,1},{1,0,1},{1,1,0}};
    res= obj.findDegrees(msx);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}