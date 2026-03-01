/* 
 *  (▀̿Ĺ̯▀̿ ̿) Author - Balerion_The_second  (▀̿Ĺ̯▀̿ ̿)
 */

#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define vec vector<ll>
ll MOD = (7 + (1e9));
#define en endl
using namespace std;


class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.length();
        for(int i = n-1;i>=0;i--){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                s.pop_back();
            }else{
                break;
            }
        }
        return s;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "";
    string res = obj.trimTrailingVowels(s);
    cout<<res<<en;
    return 0;
}