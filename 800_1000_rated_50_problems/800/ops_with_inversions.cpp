/* *  Author - Balerion_The_second  
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
        ll n;
        cin>>n;
        vec a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n <= 1) {
            cout << 0 << en;
            continue;
        }

        ll cnt = 0;
        ll max = a[0];
        
        for(int i = 1; i < n; i++){
            if(a[i] < max){
                cnt++;
            } else {
                max = a[i];
            }
        }
        cout<<cnt<<en;
    }
    return 0;
}