#include<bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3,res;
        cin>>s1>>s2>>s3;
        res.push_back(s1[0]);
        res.push_back(s2[0]);
        res.push_back(s3[0]);
        cout<<res<<endl;
    }
    return 0;
}