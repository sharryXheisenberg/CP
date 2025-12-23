/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

ll binpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod; 
    while (exp > 0) {
        if (exp % 2 == 1) { 
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod = 1e9+7;
    int n;
    cin >> n; 
    while(n--){
        ll a, b; 
        cin >> a >> b;
        ll ok = binpow(a, b, mod);
        cout << ok << en;
    }
    return 0;
}