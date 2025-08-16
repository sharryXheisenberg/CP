#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s == "red"){
        cout<<"SSS"<<endl;
    }else if(s == "blue"){
        cout<<"FFF"<<endl;
    }else if(s == "green"){
        cout<<"MMM"<<endl;
    }else{
        cout<<"Unknown"<<endl;
    }
    return 0;
}