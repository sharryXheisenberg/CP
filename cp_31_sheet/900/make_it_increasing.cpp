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
        ll ans = 0;
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1]){
                ans+=1;
                a[i]/=2;
                if(a[i]==0)
                    break;
            }
            if(a[i]==0 && a[i+1]==0){
                ans = -1;
                break;
            }
        }
        cout<<ans<<en;
    }
    return 0;
}

// TC - O(n) = O(nlog(2*10^9)) = O(30*31) = O(931) = roughly 10^3;
// SC = O(n) = O(30)
