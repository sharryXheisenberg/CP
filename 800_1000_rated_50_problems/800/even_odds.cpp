/* 
 *   Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    ll total_odds = (n + 1) / 2;
    
    if (k <= total_odds) {
        cout << (2 * k) - 1 << en;
    } else {
        ll even_position = k - total_odds;
        cout << 2 * even_position << en;
    }
    
    return 0;
}