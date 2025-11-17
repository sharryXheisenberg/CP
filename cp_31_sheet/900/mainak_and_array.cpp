#include<bits/stdc++.h>
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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans = a[n-1] - a[0];

        for(int i=1;i<n;i++){  // first is fixed
            ans = max(ans,a[i]-a[0]);
        }
        for(int i=0;i<n-1;i++){ // last (n-1)th index is fixed
            ans = max(ans,a[n-1]-a[i]);
        }
        for(int i=0;i<n-1;i++){  // alternate values is checked
            ans = max(ans , a[i] - a[i+1]);
        }
        cout<<ans<<en;
    }
    return 0;
}

// TC-O(3n) = O(n)
// SC - O(n) 