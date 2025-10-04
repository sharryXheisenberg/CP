#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x,y;
    cin>>x>>y;
    unordered_map<string, int>ord;
    ord={
        {"Ocelot",0},
        {"Serval",1},
        {"Lynx",2}
    };
    if(ord[x]>=ord[y]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;    
}