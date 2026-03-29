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
    int firstMatchingIndex(string s) {
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == s[n - i - 1]) {
                return i; 
            }
        }
        return -1; 
    }
};
// TC - O(n)
// SC - O(1)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abcacbd";
    int res = obj.firstMatchingIndex(s);
    cout << res << en;
    return 0;
}