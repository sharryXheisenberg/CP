/* 
 *   Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
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
        char c;
        cin>>c;
        string s;
        cin>>s;
        int l =0;
        int h = s.length()-1;
        int cnt = 0;
        while(l<=h){
            if(s[l]!=s[h] && (s[l]!=c && s[h]!=c)){
                cnt+=2;
            }else if(s[l]!=s[h] && (s[l]==c || s[h]==c)){
                cnt+=1;
            }
            l++;
            h--;
        }
         cout<<cnt<<en;
    }
    return 0;
}