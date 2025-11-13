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
        string s;
        cin>>s;
        ll long_substr_len = 1;
        ll cur_substr_len = 1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                cur_substr_len++;
            }else{
                long_substr_len = max(long_substr_len,cur_substr_len);
                cur_substr_len=1;
            }
        }
        long_substr_len = max(long_substr_len,cur_substr_len);
        cout<<long_substr_len +1 <<en;
    }
    return 0;
}