/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> loss_map;

        for(auto& match : matches) {
            int winner = match[0];
            int loser = match[1];
            loss_map[loser]++;
            if(loss_map.find(winner) == loss_map.end()) {
                loss_map[winner] = 0;
            }
        }

        vector<int> no_loss;
        vector<int> one_loss;

        for(auto& entry : loss_map) {
            int player = entry.first;
            int losses = entry.second;

            if(losses == 0) {
                no_loss.push_back(player);
            }
            else if(losses == 1) {
                one_loss.push_back(player);
            }
        }

        return {no_loss, one_loss};
    }
};
//TC - O(nlogn) 
// SC - O(n)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> res = obj.findWinners(matches);

    
    cout << "No Loss: ";
    for(int x : res[0]) cout << x << " ";
    cout << endl;

    cout << "One Loss: ";
    for(int x : res[1]) cout << x << " ";
    cout << endl;

    return 0;
}