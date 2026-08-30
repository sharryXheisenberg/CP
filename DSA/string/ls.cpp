/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
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
    ll n, k;
    cin>>n>>k;
    string s ;
    cin>>s;
    unordered_map<char,int>kl;
    for(int i=0;i<s.length();i++){
        kl[s[i]]++;
    }
    string res ;
    for(auto &it:kl){
        if(it.second>=k){
            res.push_back(it.first);
        }
    }    
    sort(res.begin(),res.end());
    cout<<res<<en;
    return 0;
}