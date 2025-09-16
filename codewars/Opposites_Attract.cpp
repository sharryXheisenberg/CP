#include<bits/stdc++.h>
using namespace std;


bool lovefunc(int f1, int f2) {
  return (f1%2==0 && f2%2==1) || (f1%2==1 && f2%2==0) ? true:false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool ok = lovefunc(3,4);
    if(ok){
        cout<<"they are in!"<<endl;
    }else{
        cout<<"They are not in"<<endl;
    }
    return 0;
}