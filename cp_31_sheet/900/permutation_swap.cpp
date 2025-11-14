#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include <numeric>
#define ll long long
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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        ll k = abs(a[0] - 1);
        if(k < 0) k = -k;
        for(ll i=1;i<n;i++){
            // k = gcd(k,abs(a[i]-(i+1)));
        }
        cout<<k<<en;
    }
    return 0;

}