/* * Author - Balerion_The_second
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    ll current_max = 0;
    ll current_min = 0;
    
    for(int i = 0; i < n; i++) {
        ll from_max_red = current_max - a[i];
        ll from_max_blue = b[i] - current_max;
        
        ll from_min_red = current_min - a[i];
        ll from_min_blue = b[i] - current_min;

        ll new_max = max(from_max_red, from_min_blue);
        ll new_min = min(from_min_red, from_max_blue);
        
        current_max = new_max;
        current_min = new_min;
    }
    
    cout << current_max << en;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}