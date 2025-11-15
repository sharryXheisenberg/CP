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
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll old_sum = 0;
        for(int i=0;i<n;i++){
            old_sum+=a[i];
        }
        vector<ll>pref_sm(n+1,0);
        for(int i=1;i<=n;i++){
            pref_sm[i] = pref_sm[i-1] + a[i-1];
        }
        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;
            ll sm_to_remv = pref_sm[r] - pref_sm[l-1];
            ll sm_to_add = (r-l+1)*k;
            ll total_sm = old_sum - sm_to_remv + sm_to_add;
            if(total_sm%2==1){
                cout<<"YES"<<en;
            }else{
                cout<<"NO"<<en;
            }
        }
    }
    
    return 0;
}

// TC- O(n+q) = O(2*10^5)
//SC -O(n) = O(2*10^5)