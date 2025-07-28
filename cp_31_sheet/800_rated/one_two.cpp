#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

    long long n ;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long tt_two_cnt = 0;
    long long curnt_two_cnt = 0;

    for(int i=0;i<n;i++){
        if(a[i]==2){
            tt_two_cnt+=1;
        }
    }
    long long ans=-1;
    
    for(int i=0;i<n;i++){
        if(a[i]==2){
            curnt_two_cnt+=1;
        }
        if((curnt_two_cnt) == (tt_two_cnt - curnt_two_cnt) ){
            ans = i+1;
            break;
        }
    }        
    cout<<ans<<endl;
}
    return 0;

}