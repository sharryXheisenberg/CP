/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long
#define en endl
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int beautifulSubstrings(string s, int k) {
       int res = 0;
        for(int i=0;i<s.length();i++){
             int v_cnt = 0 , con_cnt = 0 ;
            for(int j=i;j<s.length();j++){  
                if(isVowel(s[j])) v_cnt+=1;
                else{
                    con_cnt+=1;
                }
                if((v_cnt == con_cnt) && (v_cnt*con_cnt)%k==0){
                    res+=1;
                }
            }
        }
        return res;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "abba";
    int k = 1;
    int res = obj.beautifulSubstrings(s,k);
    cout<<res<<en;
    return 0;
}