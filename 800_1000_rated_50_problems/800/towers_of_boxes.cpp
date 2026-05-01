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
    cin>>t;
    while(t--){
        ll n ,m , d;
        cin>>n>>m>>d;
        ll max_on_top = d / m;
        ll tower_capacity = max_on_top + 1;
        ll min_towers = (n + tower_capacity - 1) / tower_capacity;
        cout << min_towers << en;
    }
    
    return 0;
}