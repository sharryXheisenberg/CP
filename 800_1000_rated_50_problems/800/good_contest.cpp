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

void solve() {
    ll n;
    cin >> n;
    ll a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    ll min_solves = min({a1, a2, a3});
    cout << n - min_solves << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}