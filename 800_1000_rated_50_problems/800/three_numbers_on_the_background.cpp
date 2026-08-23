/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
        vec v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        ll a = v[0];
        ll b = v[1];
        ll c = v[2];
        if(c>a+b){
            c = a+b;
        }
        cout<<c-a<<en;
    }
    return 0;
}