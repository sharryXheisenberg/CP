#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ops = 0;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            //even case
            if((a[i]%2==0) &&(a[i+1]%2==0)){
                a[i]=(a[i]*a[i+1]);
                ops+=1;
            }//odd case
            else if((a[i]%2==1) &&(a[i+1]%2==1)){
                a[i]=(a[i]*a[i+1]);
                ops+=1;
            }
        }
        cout<<ops<<endl;
    }
    return 0;
}