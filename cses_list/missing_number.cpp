#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long su=0;
    cin>>n;
    vector<long long>a(n);
    long long sum = (n*(n+1))/2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n;i++){
        su+=a[i];
    }
    cout<<(sum-su)<<endl;
return 0;
}