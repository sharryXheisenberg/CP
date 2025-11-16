#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int ops = 0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=s.size()-1;i>0;i--){
            if(s[i-1]!=s[i]){
                s[i-1]=s[i];
                ops+=1;
            } 
        }
        cout<<ops<<en;
    }
    return 0;
}