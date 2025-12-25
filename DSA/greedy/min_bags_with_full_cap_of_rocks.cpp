/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int> vac; 
        for(int i = 0; i < n; i++) {
            vac.push_back(capacity[i] - rocks[i]);
        }

        sort(vac.begin(), vac.end());    
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(additionalRocks >= vac[i]) {
                additionalRocks -= vac[i];
                cnt++;
            } else {
                break;
            }
        }
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    vector<int> cap = {10, 2, 2};
    vector<int> rocks = {2, 2, 0};
    int a = 100;
    int op = obj.maximumBags(cap, rocks, a);
    cout << op << endl;
    return 0;
}