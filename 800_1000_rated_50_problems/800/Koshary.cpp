/* 
 *  (▀̿Ĺ̯▀̿ ̿) Koshary.cpp (▀̿Ĺ̯▀̿ ̿)
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
        ll x,y;
        cin>>x>>y;
        if((x%2==1) && (y%2==1)){
            cout<<"NO"<<en;
        }else{
            cout<<"YES"<<en;
        }
    }
    return 0;
}