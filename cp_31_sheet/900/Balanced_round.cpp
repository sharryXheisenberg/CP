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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int counter = 1 , ans = 1;
        sort(a.begin(),a.end());   //O(nlog2(n))
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])<=k){
                counter+=1;
            }else{
                counter=1;
            }
            ans=max(ans,counter);
        }
        cout<<n-ans<<en;
    }
    return 0;
}

//TC - (nlog*2(n)) = (2*10^5log(2*10^5)) = 40 * 10^5 = 4*10^6
//SC - O(n) 
