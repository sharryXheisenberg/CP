/* * (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    vector<int> res;
    void dfs(int u, int prev, unordered_map<int, vector<int>> &adj) {
        res.push_back(u);
        for (int &v : adj[u]) {
            if (v != prev) {
                dfs(v, u, adj);
            }
        }
    }

    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> adj;
        for (vector<int> &v : adjacentPairs) {
            int u = v[0];
            int p = v[1];

            adj[u].push_back(p);
            adj[p].push_back(u);
        }

        int startPoint = -1;
        for (auto &it : adj) {
            if (it.second.size() == 1) {
                startPoint = it.first;
                break; 
            }
        }
        dfs(startPoint, INT_MIN, adj);
        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    vector<vector<int>> nums = {{2, 1}, {3, 4}, {3, 2}};
    
    vector<int> res = obj.restoreArray(nums);
    
    cout << "[";
    for(int i = 0; i < res.size(); i++){
        cout << res[i];
        if(i < res.size() - 1) cout << ",";
    }
    cout << "]" << en;
    
    return 0;
}