/* 
 *   Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    unordered_set<char>op(s.begin(),s.end());
    if(op.size()%2==0) cout<<"CHAT WITH HER!"<<en;
    else{
        cout<<"IGNORE HIM!"<<en;
    }
    return 0;
}