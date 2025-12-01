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
    string s;
    cin>>s;
    int up_cnt =0;
    int lo_cnt =0;
    for(char c:s){
        if(isupper(c)){
            up_cnt+=1;
        }else{
            lo_cnt+=1;
        }
    }
    if(up_cnt>lo_cnt){
        for(int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<en;
    return 0;
}
// TC - O(n)
// SC - O(1)