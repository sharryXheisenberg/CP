#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a==b) cout<<0<<endl;
    else{
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                if(i!=j){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}