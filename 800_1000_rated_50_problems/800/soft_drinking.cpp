/* * Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll toast_drink = (k * l) / nl;
    ll toast_limes = c * d;
    ll toast_salt = p / np;
    ll min_toasts = min({toast_drink, toast_limes, toast_salt});
    cout << min_toasts / n << en;
    
    return 0;
}