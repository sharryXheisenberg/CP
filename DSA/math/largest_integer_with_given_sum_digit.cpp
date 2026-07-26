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
    int largestInteger(int n, int s) {
        if (s > 9 * n) {
            return -1;
        }
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            int digit = (s >= 9) ? 9 : s;
            result = (result * 10) + digit;
            s -= digit;
        }
        return result;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution obj;

    int n = 2, s = 9;
    cout << obj.largestInteger(n, s) << en; 
    
    return 0;
}