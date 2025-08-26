#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x>>y;
    if((x+y)<12){
        cout<<(x+y)<<endl;
    }
    else if((x+y)>12){
        cout<<((x+y) - 12)<<endl;
    }
    else if((x+y)==12){
        cout<<12<<endl;
    }
    return 0;
}