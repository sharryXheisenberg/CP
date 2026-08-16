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
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min_dis = INT_MAX;
        int best_index = -1;
        for(int i=0;i<drones.size();i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];

            int dist = abs((x-target[0])) + abs((y - target[1]));
            if(dist<=range){
                if(dist<min_dis){
                 min_dis = dist;
                 best_index = i;
                }
            }
        }
       return best_index;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>>drones = {{2,1,5},{4,4,5},{6,6,8}};
    vector<int>targ = {5,5};
    int res = obj.nearestDrone(drones,targ);
    cout<<res<<en;
    return 0;
}