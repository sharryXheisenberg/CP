#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define en endl

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a , b , n;
        cin>>a>>b>>n;
        vector<ll>x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        ll max_time = b;   // b  is initial time from this timer will start to decrease by 1 upto 0
        for(int i=0;i<n;i++){
            max_time+=min(x[i],a-1);
        }
        cout<<max_time<<en;
    }
    return 0;
}

// TC(O(n)) = O(100)
// SC  = O(n) = O(100)