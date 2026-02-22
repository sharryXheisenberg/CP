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
    int binaryGap(int n) {
        string s = bitset<32>(n).to_string();
        int len = s.length();
        int maxGap = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == '1') {
                for (int j = i + 1; j < len; j++) {
                    if (s[j] == '1') {
                        maxGap = max(maxGap, j - i);
                        break; 
                    }
                }
            }
        }
        return maxGap;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 6; 
    int res = obj.binaryGap(n);
    cout << res << en;
    return 0;
}