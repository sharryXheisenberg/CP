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
    int countKthRoots(int l, int r, int k) {
        int v = k; 
        if (v == 1) return r - l + 1;       
        int cnt = 0;
        for (long long i = 0; ; i++) {
            long long val = 1; 
            bool exceeded = false;
            for (int j = 0; j < v; j++) {
                val *= i;
                if (val > r) {
                    exceeded = true;
                    break;
                }
            }
            if (exceeded) {
                break;
            }
            if (val >= l && val <= r) {
                cnt++;
            }
        }
        
        return cnt;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;
    int l = 8, r = 30, k = 2;
    int res = obj.countKthRoots(l, r, k);
    cout << res << en;
    
    return 0;
}