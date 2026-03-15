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
    long long countCommas(long long n) {
        long long nt = n; 
        long long totalCommas = 0;
        long long boundary = 1000;
        while (nt >= boundary) {
            totalCommas += (nt - boundary + 1);
            boundary *= 1000;
        }
        
        return totalCommas;
    }
};

// TC - O(n)
// SC - O (1)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    long long n = 1004590; 
    long long res = obj.countCommas(n);
    cout << res << en;
    
}