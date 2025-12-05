/* 
 * Author - Balerion_The_second
 */


#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    string op = s;
    int cnt = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]  ){
            cnt+=1;
        }
    }
    cout<<cnt<<en;
    return 0;
}
