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
    ll cnt = 0;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) cnt+=1;
    }
    cout<<cnt<<en;
    return 0;
}