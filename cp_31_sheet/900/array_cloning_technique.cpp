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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll , ll>mp;
        for(ll i=0;i<n;i++){
            mp[a[i]]++;
        }
        ll currnt_high_freq = 0;
        for(auto i:mp){
            currnt_high_freq = max(currnt_high_freq,i.second);
        }
        ll ops = 0;
        while(currnt_high_freq<n){
            ops++;
            if(currnt_high_freq * 2 <=n){
                ops+=currnt_high_freq;
                currnt_high_freq*=2;
            }
            else{
                ops += n - currnt_high_freq;
                currnt_high_freq = n;
            }
        }
        cout<<ops<<en;
    }
    return 0;
}