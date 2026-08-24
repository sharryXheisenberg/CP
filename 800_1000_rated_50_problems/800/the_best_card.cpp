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

bool isPrime(int n){
    if(n<=1) return false;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(isPrime(n+1)){
            cout<<"YES"<<en;
        }else{
            cout<<"NO"<<en;
        }
    }
    return 0;
}

// TC - O(sqrt(n))
// SC - O(1)