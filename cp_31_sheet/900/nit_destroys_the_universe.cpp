/* 
 * Author - Balerion_The_second
 */
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
        int cnt_zrs = 0;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==0) cnt_zrs+=1;
        }
        if(cnt_zrs==n){
            cout<<0<<en;
            continue;
        }
        bool fnd_zero = false;
        ll l = 0;
        ll r = n-1;
        while(a[l]==0) l++;
        while(a[r]==0) r--;
        
        for(ll i=l;i<=r;i++){
            if(a[i]==0) fnd_zero = true;
        }
        if(fnd_zero==false) cout<<1<<en;
        else cout<<2<<en;
    }
    return 0;
}

// TC - O(n) = 2*10^5
// SC - O(n) = 2*10^5
