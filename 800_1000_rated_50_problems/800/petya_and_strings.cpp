/* 
 *  Author - Balerion_The_second  
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1 , s2;
    cin>>s1>>s2;
    int score1 = 0, score2 = 0;
    for(int i = 0;i<s1.length();i++){
        if(isupper(s1[i])) s1[i] = tolower(s1[i]);
        score1+=s1[i] - 'a';
    }
    for(int i = 0;i<s2.length();i++){
        if(isupper(s2[i])) s2[i] = tolower(s2[i]);
        score2+=s2[i] - 'a';
    }
    if(score1<score2) cout<<-1<<en;
    else if(score1>score2) cout<<1<<en;
    else if(score1==score2) cout<<0<<en;
    return 0;
}