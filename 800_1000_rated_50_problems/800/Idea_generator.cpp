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
        ll k;
        cin>>k;

        if(k%2==0){
            cout<<"NO"<<en;
        }else{
            cout<<"YES"<<en;
        }
    }
    return 0;
}