/* * Author - Balerion_The_second  
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
        ll n;
        cin >> n;
        if(n == 2){
            cout << 2 << en;
        } else if(n == 3){
            cout << 3 << en;
        } else {
            cout << n % 2 << en;
        }
    }
    return 0; 
}