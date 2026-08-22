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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--){
        vec tokens(3);
        cin >> tokens[0] >> tokens[1] >> tokens[2];
        sort(tokens.begin(), tokens.end());        
        ll a = tokens[0]; 
        ll b = tokens[1]; 
        ll c = tokens[2]; 
        if(a == b || b == c){
            cout << 0 << en;
        } else {
            cout << min(c - b, b - a) << en;
        }
    }
    
    return 0;
}