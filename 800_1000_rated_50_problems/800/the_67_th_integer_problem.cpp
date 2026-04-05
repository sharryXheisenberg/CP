/* 
 *   Author - Balerion_The_second  
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
        ll a1,a2,a3,a4,a5,a6,a7;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
        vec a;
        a.pb(a1);
        a.pb(a2);
        a.pb(a3);
        a.pb(a4);
        a.pb(a5);
        a.pb(a6);
        a.pb(a7);
        sort(a.begin(),a.end());
        ll sum=0;
        for(int i=0;i<6;i++){
            a[i]=(-1)*a[i];
        }
        for(int i=0;i<7;i++){
            sum+=a[i];
        }
        cout<<sum<<en;
    }
    return 0;
}