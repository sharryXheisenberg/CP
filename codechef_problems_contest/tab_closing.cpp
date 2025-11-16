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
    ll a,b,n;
    cin>>a>>b>>n;
    if(a==b ||(n*b<=a)){
        cout<<1<<en;
    }else{
        cout<<2<<en;
    }  

  }
    return 0;
}