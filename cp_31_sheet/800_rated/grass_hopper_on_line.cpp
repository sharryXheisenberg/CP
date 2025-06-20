#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,k;
        cin>>x>>k;

        if(x%k==0){  // we can move to x by just move distance by 1 and then x-1
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
        else {   // (x%k!=0)
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}
// tc - O(1)
// sc - o(1)