#include<iostream>
#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using ld = long double;

#define INF(t) numeric_limits<t>::max()

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(n); for(auto &x:a) cin>>x;
        int ans=0, cnt=0;
        for(int i =0;i<n;i++){
            if(a[i]==0){
                cnt++;
            }else cnt=0;
            if(cnt==k){
                ans++;cnt-=1;
            }
        }
    cout<<ans<<"\n";
    }
return 0;
}