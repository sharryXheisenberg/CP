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
    bool validDigit(int n, int x) {
        string jk = to_string(n);
        char hk = '0' + x;
        if (jk[0] == hk) {
            return false;
        }
        if (jk.find(hk) != string::npos) {
            return true;
        }
        return false;        
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int n = 5;
    int x = 1;
    bool res = obj.validDigit(n, x);
    if(res) {
        cout << "true" << en;
    } else {
        cout << "false" << en;
    }
    
    return 0;
}