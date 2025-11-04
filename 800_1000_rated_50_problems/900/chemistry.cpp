#include<bits/stdc++.h>
using namespace std;
#define en endl

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        long long od_freq = 0;
        for(int i =0;i<26;i++){
            od_freq+=freq[i]%2;
        }
        if(od_freq>k+1)
            cout<<"NO"<<en;
        else
            cout<<"YES"<<en; 
    }
    return 0;
}