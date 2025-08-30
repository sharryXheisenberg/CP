#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int x;
    string y;
    cin>>x>>y;
    if(s[x-1]==y){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    } 
    return 0;
}