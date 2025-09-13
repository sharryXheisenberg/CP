#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int d = 1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for(int j=0;j<n;j++){
            if(a[j]>b[j]){
                d+= a[j] - b[j];
            }
        }
        cout<<d<<endl;
    }
    return 0;
}