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
        ll n ,s , x;
        cin>>n>>s>>x;
        vec a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum = accumulate(a.begin(),a.end(),0LL);
        if(s >= sum && (s - sum) % x == 0){
            cout<<"YES"<<en;
        }
        else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}