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
        int max_cnt=0;
        int curr_cnt =0;
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                curr_cnt+=1;
                max_cnt = max(max_cnt,curr_cnt);
            }else{
                curr_cnt=0;
            }
        }
        cout<<max_cnt<<en;
    }
    return 0;
}