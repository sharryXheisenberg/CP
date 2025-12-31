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
    ll mod = 1e9+7;
    string s;
    cin>>s;
    unordered_set<char>op(s.begin(),s.end());
    cout<<op.size() % mod<<en;
    return 0;
}