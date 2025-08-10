#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    string ns = s.substr(0,3);
    reverse(ns.begin(),ns.end());
    string new1 = ns.substr(0,3);
    if(new1=="tea"){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}