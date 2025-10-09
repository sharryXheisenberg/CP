#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> res;
        for (int i = 0; i < spells.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < potions.size(); j++) {
                long long product = spells[i] * potions[j];
                if (product >= success) cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution obj;
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;

    vector<int> res = obj.successfulPairs(spells, potions, success);
    for (int x : res) cout << x << " ";
    cout << "\n";

    return 0;
}
