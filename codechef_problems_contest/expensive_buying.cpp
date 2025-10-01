#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;   
        cin>>n>>k;
        vector<int>c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        sort(c.begin(),c.end(),greater<int>());
        int total_sum=0;
        for(int i=0;i<k;i++){
            total_sum+=c[i];
        }
        cout<<total_sum<<endl;
    }
    return 0;
}
