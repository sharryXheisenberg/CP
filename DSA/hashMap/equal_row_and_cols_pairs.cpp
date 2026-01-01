/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        // map<vector<int>row,int>mp;
        // brute force O(n^3)
        int row = grid.size();
        int col = grid[0].size();
        int cnt =0;
        for(int i=0;i<row;i++){
            for(int j = 0;j<col;j++){
                int is_equal = true;
                for(int k = 0;k<row;k++){
                    if(grid[i][k]!=grid[k][j]){
                        is_equal = false;
                        break;

                    } 
                }
                cnt+=is_equal;
            }
        }
        return cnt;
    }

    // optimal - O(n^2)
    int equalPairs(vector<vector<int>>& grid) {
        int n  = grid.size();
        int cnt = 0;
        map<vector<int>,int>mp;
        for(int row = 0;row<n;row++){
            mp[grid[row]]++;
        }
        for(int c =0;c<n;c++){
            vector<int>temp;
            for(int r = 0;r<n;r++){
                temp.push_back(grid[r][c]);
            }
            cnt+=mp[temp];
        }
        return cnt;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>> grid = {{3,2,1},{1,7,6},{2,7,7}};
    int res = obj.equalPairs(grid);
    cout<<res<<en;
    return 0;
}