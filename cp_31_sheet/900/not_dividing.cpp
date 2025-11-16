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
        ll ops = 0;
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==1){
                a[i]++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]%a[i]==0) a[i+1]++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<en;
        
    }
    return 0;
}

// TC - O(n) = 10^4
// SC - O(n) = 10^4