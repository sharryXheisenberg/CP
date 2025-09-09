#include<bits/stdc++.h>
using namespace std;

bool set_alarm(const bool& employed,const bool& vacation){
  return (employed==true && vacation == false) ? true:false; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool ok = set_alarm(true,true);
    if(ok){
        cout<<"he is employeer"<<endl;
    }else cout<<"he is not an employeer"<<endl;
    return 0;
}