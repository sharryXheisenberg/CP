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
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n%2==0){
            cout<<2<<en;
            cout<<1<< " " << n <<en;
            cout<<1<< " " << n <<en;
        }
        else{
            cout<< 4 << en;
            cout<< 1 << " " << n-1 << en;
            cout<< 1 << " " << n-1 << en;
            cout<< n-1 << " " << n << en;
            cout<< n-1 << " " << n << en;
        }
    }
    return 0;
}

// TC - O(n) - O(100)
// sc - O(n) - O(100) 